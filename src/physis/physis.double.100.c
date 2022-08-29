#include "physis/physis.h"
#define real_t double
#define real2d_t PSGrid2DDouble
#define new_real2d PSGrid2DDoubleNew

#define TOTAL_GRID_POINTS 100
//

#define MAX_I1 TOTAL_GRID_POINTS
#define MAX_I2 TOTAL_GRID_POINTS

real2d_t q, qo;
#define DX (1.0/TOTAL_GRID_POINTS)
#define DT (0.0001*DX)

#ifdef __cplusplus
extern "C" {
#endif
/*
static real_t
kernel_diff(const int x, real1d_t q, real_t dx, real_t dt) {
  return (PSGridGet(q, x - 1)  - PSGridGet(q, x)) * dt / dx;
}
*/

#define Q(xx, yy) (PSGridGet(q, x + xx, y + yy))
#define K1(xx, yy) (DT / DX / DX * (Q(-1+xx, yy) + Q(xx, -1+yy) + Q(1+xx, yy) + Q(xx, 1+yy) - 4.0*Q(xx, yy)))
#define K2(xx, yy) (DT / DX / DX * ((Q(-1+xx, yy) + (K1(-1+xx, yy)/2.0)) + (Q(xx, -1+yy) + (K1(xx, -1+yy)/2.0)) + (Q(1+xx, yy) + (K1(1+xx, yy)/2.0)) + (Q(xx, 1+yy) + (K1(xx, 1+yy)/2.0)) - 4.0*(Q(xx, yy) + (K1(xx, yy)/2.0))))
#define K3(xx, yy) (DT / DX / DX * ((Q(-1+xx, yy) + (K2(-1+xx, yy)/2.0)) + (Q(xx, -1+yy) + (K2(xx, -1+yy)/2.0)) + (Q(1+xx, yy) + (K2(1+xx, yy)/2.0)) + (Q(xx, 1+yy) + (K2(xx, 1+yy)/2.0)) - 4.0*(Q(xx, yy) + (K2(xx, yy)/2.0))))
#define K4(xx, yy) (DT / DX / DX * ((Q(-1+xx, yy) + K3(-1+xx, yy)) + (Q(xx, -1+yy) + K3(xx, -1+yy)) + (Q(1+xx, yy) + K3(1+xx, yy)) + (Q(xx, 1+yy) + K3(xx, 1+yy)) - 4.0*(Q(xx, yy) + K3(xx, yy))))

static void
kernel_step(const int x, const int y, real2d_t q, real2d_t qo) {
  if(5 <= x && 5 <= y && x < TOTAL_GRID_POINTS - 5 && y < TOTAL_GRID_POINTS - 5) {
    real_t qq = PSGridGet(q, x, y);
    real_t k1 = K1(0, 0);
    real_t k2 = K2(0, 0);
    real_t k3 = K3(0, 0);
    real_t k4 = K4(0, 0);
    PSGridEmit(qo, qq + (k1/6.0 + k2/3.0 + k3/3.0 + k4/6.0));
  } else {
    PSGridEmit(qo, 0.0);
  }
}

void createHost(real_t * host) {
  for(int i2 = 0; i2 < MAX_I2; ++i2)
    for(int i1 = 0; i1 < MAX_I1; ++i1) {
      int c1 = i1 - (MAX_I1 / 2);
      int c2 = i2 - (MAX_I2 / 2);
      host[i1 + (TOTAL_GRID_POINTS * i2)] = (c1 * c1 + c2 * c2) < 100 ? 1.0 : 0.0;
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
  qo = new_real2d(MAX_I1, MAX_I2);
  PSGridCopyin(q, host);
  if (strcmp(argv[1], "bench") == 0) {
    struct timespec start, end;
    if(clock_gettime(CLOCK_MONOTONIC, &start)) return 0;
    PSStencilRun(PSStencilMap(kernel_step, dom, q, qo), PSStencilMap(kernel_step, dom, qo, q), 500000);
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
      PSStencilRun(PSStencilMap(kernel_step, dom, q, qo), 1);
      PSGridCopyout(qo, host);
      printf("%lf", host[0]);
      for(int q = 1; q < MAX_I1*MAX_I2; ++q)
	printf(",%lf", host[q]);
      printf("\n");
      PSStencilRun(PSStencilMap(kernel_step, dom, qo, q), 1);
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

