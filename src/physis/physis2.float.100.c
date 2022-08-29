#include "physis/physis.h"
#define real_t float
#define real2d_t PSGrid2DFloat
#define new_real2d PSGrid2DFloatNew

#define TOTAL_GRID_POINTS 100
//

#define MAX_I1 TOTAL_GRID_POINTS
#define MAX_I2 TOTAL_GRID_POINTS

real2d_t q, k1, k2, k3, qo;
#define DX (1.0f/TOTAL_GRID_POINTS)
#define DT (0.0001f*DX)

#ifdef __cplusplus
extern "C" {
#endif

#define Q(xx, yy) (PSGridGet(q, x + xx, y + yy))
#define K1(xx, yy) (PSGridGet(k1, x + xx, y + yy))
#define K2(xx, yy) (PSGridGet(k2, x + xx, y + yy))
#define K3(xx, yy) (PSGridGet(k3, x + xx, y + yy))
#define K4(xx, yy) (DT / DX / DX * ((Q(-1+xx, yy) + K3(-1+xx, yy)) + (Q(xx, -1+yy) + K3(xx, -1+yy)) + (Q(1+xx, yy) + K3(1+xx, yy)) + (Q(xx, 1+yy) + K3(xx, 1+yy)) - 4.0f*(Q(xx, yy) + K3(xx, yy))))

static void
kernel_k1(const int x, const int y, real2d_t q, real2d_t k1) {
  if(5 <= x && 5 <= y && x < TOTAL_GRID_POINTS - 5 && y < TOTAL_GRID_POINTS - 5) {
    PSGridEmit(k1, DT/DX/DX*(Q(-1,0) + Q(0, -1) + Q(1, 0) + Q(0, 1) - 4.0f*Q(0, 0)));
  } else {
    PSGridEmit(k1, 0.0f);
  }
}
static void
kernel_k2(const int x, const int y, real2d_t q, real2d_t k1, real2d_t k2) {
  if(5 <= x && 5 <= y && x < TOTAL_GRID_POINTS - 5 && y < TOTAL_GRID_POINTS - 5) {
    PSGridEmit(k2, DT / DX / DX * ((Q(-1, 0) + (K1(-1, 0)/2.0f)) + (Q(0, -1) + (K1(0, -1)/2.0f)) + (Q(1, 0) + (K1(1, 0)/2.0f)) + (Q(0, 1) + (K1(0, 1)/2.0f)) - 4.0f*(Q(0, 0) + (K1(0, 0)/2.0f))));
  } else {
    PSGridEmit(k2, 0.0f);
  }
}
static void
kernel_k3(const int x, const int y, real2d_t q, real2d_t k2, real2d_t k3) {
  if(5 <= x && 5 <= y && x < TOTAL_GRID_POINTS - 5 && y < TOTAL_GRID_POINTS - 5) {
    PSGridEmit(k3, DT / DX / DX * ((Q(-1, 0) + (K2(-1, 0)/2.0f)) + (Q(0, -1) + (K2(0, -1)/2.0f)) + (Q(1, 0) + (K2(1, 0)/2.0f)) + (Q(0, 1) + (K2(0, 1)/2.0f)) - 4.0f*(Q(0, 0) + (K2(0, 0)/2.0f))));
  } else {
    PSGridEmit(k3, 0.0f);
  }
}
static void
kernel_step(const int x, const int y, real2d_t q, real2d_t k1, real2d_t k2, real2d_t k3, real2d_t qo) {
  if(5 <= x && 5 <= y && x < TOTAL_GRID_POINTS - 5 && y < TOTAL_GRID_POINTS - 5) {
    real_t qq = PSGridGet(q, x, y);
    real_t kk1 = K1(0, 0);
    real_t kk2 = K2(0, 0);
    real_t kk3 = K3(0, 0);
    real_t kk4 = K4(0, 0);
    PSGridEmit(qo, qq + (kk1/6.0f + kk2/3.0f + kk3/3.0f + kk4/6.0f));
  } else {
    PSGridEmit(qo, 0.0f);
  }
}

void createHost(real_t * host) {
  for(int i2 = 0; i2 < MAX_I2; ++i2)
    for(int i1 = 0; i1 < MAX_I1; ++i1) {
      int c1 = i1 - (MAX_I1 / 2);
      int c2 = i2 - (MAX_I2 / 2);
      host[i1 + (TOTAL_GRID_POINTS * i2)] = (c1 * c1 + c2 * c2) < 100 ? 1.0f : 0.0f;
    }
}
  
int main(int argc, char ** argv) {
  if(argc != 2) {
  usage:
    printf("Usage: %s (bench | out)", argv[0]);
    return 0;
  }
  real_t * host = (real_t *)malloc(sizeof(real_t) * TOTAL_GRID_POINTS * TOTAL_GRID_POINTS);
  createHost(host);
  PSDomain2D dom = PSDomain2DNew(0, TOTAL_GRID_POINTS, 0, TOTAL_GRID_POINTS);
  PSInit(&argc, &argv, 2, MAX_I1, MAX_I2);
  q = new_real2d(MAX_I1, MAX_I2);
  k1 = new_real2d(MAX_I1, MAX_I2);
  k2 = new_real2d(MAX_I1, MAX_I2);
  k3 = new_real2d(MAX_I1, MAX_I2);
  qo = new_real2d(MAX_I1, MAX_I2);
  PSGridCopyin(q, host);
  if (strcmp(argv[1], "bench") == 0) {
    struct timespec start, end;
    if(clock_gettime(CLOCK_MONOTONIC, &start)) return 0;
      PSStencilRun(PSStencilMap(kernel_k1, dom, q, k1),
		   PSStencilMap(kernel_k2, dom, q, k1, k2),
		   PSStencilMap(kernel_k3, dom, q, k2, k3),
		   PSStencilMap(kernel_step, dom, q, k1, k2, k3, qo),
		   PSStencilMap(kernel_k1, dom, qo, k1),
		   PSStencilMap(kernel_k2, dom, qo, k1, k2),
		   PSStencilMap(kernel_k3, dom, qo, k2, k3),
		   PSStencilMap(kernel_step, dom, qo, k1, k2, k3, q), 500000);
    if(clock_gettime(CLOCK_MONOTONIC, &end)) return 0;
    long long sec = end.tv_sec - start.tv_sec;
    printf("%lf,", (double)(sec * 1000*1000*1000 + (end.tv_nsec - start.tv_nsec)) / 1000.0 / 1000.0);
    PSGridCopyout(q, host);
  } else if (strcmp(argv[1], "out") == 0) {
    const int STEP = 1000;
    printf("%lf", host[0]);
    for(int q = 1; q < MAX_I1*MAX_I2; ++q)
      printf(",%lf", host[q]);
    printf("\n");
    for(int i = 0; i < STEP/2; ++i) {
      PSStencilRun(PSStencilMap(kernel_k1, dom, q, k1),
		   PSStencilMap(kernel_k2, dom, q, k1, k2),
		   PSStencilMap(kernel_k3, dom, q, k2, k3),
		   PSStencilMap(kernel_step, dom, q, k1, k2, k3, qo), 1);
      PSGridCopyout(qo, host);
      printf("%lf", host[0]);
      for(int q = 1; q < MAX_I1*MAX_I2; ++q)
	printf(",%lf", host[q]);
      printf("\n");
      PSStencilRun(PSStencilMap(kernel_k1, dom, qo, k1),
		   PSStencilMap(kernel_k2, dom, qo, k1, k2),
		   PSStencilMap(kernel_k3, dom, qo, k2, k3),
		   PSStencilMap(kernel_step, dom, qo, k1, k2, k3, q), 1);
      PSGridCopyout(q, host);
      printf("%lf", host[0]);
      for(int q = 1; q < MAX_I1*MAX_I2; ++q)
	printf(",%lf", host[q]);
      printf("\n");
    }
  } else goto usage;
  PSGridFree(q);
  PSGridFree(qo);
  PSFinalize();
  return 0;
}
#ifdef __cplusplus
}
#endif

