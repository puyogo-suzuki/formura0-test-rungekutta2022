#define PHYSIS_REF 
#include "physis/physis.h"
#define real_t float
#define real2d_t PSGrid2DFloat
#define new_real2d PSGrid2DFloatNew
#define TOTAL_GRID_POINTS 100
//
#define MAX_I1 TOTAL_GRID_POINTS
#define MAX_I2 TOTAL_GRID_POINTS
__PSGrid *q;
__PSGrid *k1;
__PSGrid *k2;
__PSGrid *k3;
__PSGrid *qo;
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

struct __PSStencil_kernel_k1 
{
  PSDomain2D dom;
  __PSGrid *q;
  int q_index;
  __PSGrid *k1;
  int k1_index;
}
;

inline static void kernel_k1(const int x,const int y,__PSGrid *q,__PSGrid *k1)
{
  if (5 <= x && 5 <= y && x < 100 - 5 && y < 100 - 5) {
    ((float *)(k1 -> p))[__PSGridGetOffset2D(k1,x,y)] = 0.0001f * (1.0f / ((float )100)) / (1.0f / ((float )100)) / (1.0f / ((float )100)) * (((float *)(q -> p))[__PSGridGetOffset2D(q,x + -1,y + 0)] + ((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + -1)] + ((float *)(q -> p))[__PSGridGetOffset2D(q,x + 1,y + 0)] + ((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + 1)] - 4.0f * ((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + 0)]);
  }
   else {
    ((float *)(k1 -> p))[__PSGridGetOffset2D(k1,x,y)] = 0.0f;
  }
}
/* Generated by BuildRunKernelFunc */

static void __PSStencilRun_kernel_k1(const struct __PSStencil_kernel_k1 *const s)
/* Generated by BuildRunKernelFuncBody */
{
  int i2;
  for (i2 = s -> dom . local_min[1]; i2 <= s -> dom . local_max[1] - 1; i2 += 1) {
    int i1;
    for (i1 = s -> dom . local_min[0]; i1 <= s -> dom . local_max[0] - 1; i1 += 1) {
      kernel_k1(i1,i2,s -> q,s -> k1);
    }
  }
}

static struct __PSStencil_kernel_k1 __PSStencilMap_kernel_k1(PSDomain2D dom,__PSGrid *q,__PSGrid *k1)
/* Generated by BuildMap */
{
  struct __PSStencil_kernel_k1 stencil = {dom, q, __PSGridGetID(q), k1, __PSGridGetID(k1)};
  return stencil;
}

struct __PSStencil_kernel_k2 
{
  PSDomain2D dom;
  __PSGrid *q;
  int q_index;
  __PSGrid *k1;
  int k1_index;
  __PSGrid *k2;
  int k2_index;
}
;

inline static void kernel_k2(const int x,const int y,__PSGrid *q,__PSGrid *k1,__PSGrid *k2)
{
  if (5 <= x && 5 <= y && x < 100 - 5 && y < 100 - 5) {
    ((float *)(k2 -> p))[__PSGridGetOffset2D(k2,x,y)] = 0.0001f * (1.0f / ((float )100)) / (1.0f / ((float )100)) / (1.0f / ((float )100)) * (((float *)(q -> p))[__PSGridGetOffset2D(q,x + -1,y + 0)] + ((float *)(k1 -> p))[__PSGridGetOffset2D(k1,x + -1,y + 0)] / 2.0f + (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + -1)] + ((float *)(k1 -> p))[__PSGridGetOffset2D(k1,x + 0,y + -1)] / 2.0f) + (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 1,y + 0)] + ((float *)(k1 -> p))[__PSGridGetOffset2D(k1,x + 1,y + 0)] / 2.0f) + (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + 1)] + ((float *)(k1 -> p))[__PSGridGetOffset2D(k1,x + 0,y + 1)] / 2.0f) - 4.0f * (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + 0)] + ((float *)(k1 -> p))[__PSGridGetOffset2D(k1,x + 0,y + 0)] / 2.0f));
  }
   else {
    ((float *)(k2 -> p))[__PSGridGetOffset2D(k2,x,y)] = 0.0f;
  }
}
/* Generated by BuildRunKernelFunc */

static void __PSStencilRun_kernel_k2(const struct __PSStencil_kernel_k2 *const s)
/* Generated by BuildRunKernelFuncBody */
{
  int i2;
  for (i2 = s -> dom . local_min[1]; i2 <= s -> dom . local_max[1] - 1; i2 += 1) {
    int i1;
    for (i1 = s -> dom . local_min[0]; i1 <= s -> dom . local_max[0] - 1; i1 += 1) {
      kernel_k2(i1,i2,s -> q,s -> k1,s -> k2);
    }
  }
}

static struct __PSStencil_kernel_k2 __PSStencilMap_kernel_k2(PSDomain2D dom,__PSGrid *q,__PSGrid *k1,__PSGrid *k2)
/* Generated by BuildMap */
{
  struct __PSStencil_kernel_k2 stencil = {dom, q, __PSGridGetID(q), k1, __PSGridGetID(k1), k2, __PSGridGetID(k2)};
  return stencil;
}

struct __PSStencil_kernel_k3 
{
  PSDomain2D dom;
  __PSGrid *q;
  int q_index;
  __PSGrid *k2;
  int k2_index;
  __PSGrid *k3;
  int k3_index;
}
;

inline static void kernel_k3(const int x,const int y,__PSGrid *q,__PSGrid *k2,__PSGrid *k3)
{
  if (5 <= x && 5 <= y && x < 100 - 5 && y < 100 - 5) {
    ((float *)(k3 -> p))[__PSGridGetOffset2D(k3,x,y)] = 0.0001f * (1.0f / ((float )100)) / (1.0f / ((float )100)) / (1.0f / ((float )100)) * (((float *)(q -> p))[__PSGridGetOffset2D(q,x + -1,y + 0)] + ((float *)(k2 -> p))[__PSGridGetOffset2D(k2,x + -1,y + 0)] / 2.0f + (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + -1)] + ((float *)(k2 -> p))[__PSGridGetOffset2D(k2,x + 0,y + -1)] / 2.0f) + (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 1,y + 0)] + ((float *)(k2 -> p))[__PSGridGetOffset2D(k2,x + 1,y + 0)] / 2.0f) + (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + 1)] + ((float *)(k2 -> p))[__PSGridGetOffset2D(k2,x + 0,y + 1)] / 2.0f) - 4.0f * (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + 0)] + ((float *)(k2 -> p))[__PSGridGetOffset2D(k2,x + 0,y + 0)] / 2.0f));
  }
   else {
    ((float *)(k3 -> p))[__PSGridGetOffset2D(k3,x,y)] = 0.0f;
  }
}
/* Generated by BuildRunKernelFunc */

static void __PSStencilRun_kernel_k3(const struct __PSStencil_kernel_k3 *const s)
/* Generated by BuildRunKernelFuncBody */
{
  int i2;
  for (i2 = s -> dom . local_min[1]; i2 <= s -> dom . local_max[1] - 1; i2 += 1) {
    int i1;
    for (i1 = s -> dom . local_min[0]; i1 <= s -> dom . local_max[0] - 1; i1 += 1) {
      kernel_k3(i1,i2,s -> q,s -> k2,s -> k3);
    }
  }
}

static struct __PSStencil_kernel_k3 __PSStencilMap_kernel_k3(PSDomain2D dom,__PSGrid *q,__PSGrid *k2,__PSGrid *k3)
/* Generated by BuildMap */
{
  struct __PSStencil_kernel_k3 stencil = {dom, q, __PSGridGetID(q), k2, __PSGridGetID(k2), k3, __PSGridGetID(k3)};
  return stencil;
}

struct __PSStencil_kernel_step 
{
  PSDomain2D dom;
  __PSGrid *q;
  int q_index;
  __PSGrid *k1;
  int k1_index;
  __PSGrid *k2;
  int k2_index;
  __PSGrid *k3;
  int k3_index;
  __PSGrid *qo;
  int qo_index;
}
;

inline static void kernel_step(const int x,const int y,__PSGrid *q,__PSGrid *k1,__PSGrid *k2,__PSGrid *k3,__PSGrid *qo)
{
  if (5 <= x && 5 <= y && x < 100 - 5 && y < 100 - 5) {
    float qq = ((float *)(q -> p))[__PSGridGetOffset2D(q,x,y)];
    float kk1 = ((float *)(k1 -> p))[__PSGridGetOffset2D(k1,x + 0,y + 0)];
    float kk2 = ((float *)(k2 -> p))[__PSGridGetOffset2D(k2,x + 0,y + 0)];
    float kk3 = ((float *)(k3 -> p))[__PSGridGetOffset2D(k3,x + 0,y + 0)];
    float kk4 = 0.0001f * (1.0f / 100) / (1.0f / 100) / (1.0f / 100) * (((float *)(q -> p))[__PSGridGetOffset2D(q,x + -1 + 0,y + 0)] + ((float *)(k3 -> p))[__PSGridGetOffset2D(k3,x + -1 + 0,y + 0)] + (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + -1 + 0)] + ((float *)(k3 -> p))[__PSGridGetOffset2D(k3,x + 0,y + -1 + 0)]) + (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 1 + 0,y + 0)] + ((float *)(k3 -> p))[__PSGridGetOffset2D(k3,x + 1 + 0,y + 0)]) + (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + 1 + 0)] + ((float *)(k3 -> p))[__PSGridGetOffset2D(k3,x + 0,y + 1 + 0)]) - 4.0f * (((float *)(q -> p))[__PSGridGetOffset2D(q,x + 0,y + 0)] + ((float *)(k3 -> p))[__PSGridGetOffset2D(k3,x + 0,y + 0)]));
    ((float *)(qo -> p))[__PSGridGetOffset2D(qo,x,y)] = qq + (kk1 / 6.0f + kk2 / 3.0f + kk3 / 3.0f + kk4 / 6.0f);
  }
   else {
    ((float *)(qo -> p))[__PSGridGetOffset2D(qo,x,y)] = 0.0f;
  }
}
/* Generated by BuildRunKernelFunc */

static void __PSStencilRun_kernel_step(const struct __PSStencil_kernel_step *const s)
/* Generated by BuildRunKernelFuncBody */
{
  int i2;
  for (i2 = s -> dom . local_min[1]; i2 <= s -> dom . local_max[1] - 1; i2 += 1) {
    int i1;
    for (i1 = s -> dom . local_min[0]; i1 <= s -> dom . local_max[0] - 1; i1 += 1) {
      kernel_step(i1,i2,s -> q,s -> k1,s -> k2,s -> k3,s -> qo);
    }
  }
}

static struct __PSStencil_kernel_step __PSStencilMap_kernel_step(PSDomain2D dom,__PSGrid *q,__PSGrid *k1,__PSGrid *k2,__PSGrid *k3,__PSGrid *qo)
/* Generated by BuildMap */
{
  struct __PSStencil_kernel_step stencil = {dom, q, __PSGridGetID(q), k1, __PSGridGetID(k1), k2, __PSGridGetID(k2), k3, __PSGridGetID(k3), qo, __PSGridGetID(qo)};
  return stencil;
}

void createHost(float *host)
{
  for (int i2 = 0; i2 < 100; ++i2) 
    for (int i1 = 0; i1 < 100; ++i1) {
      int c1 = i1 - 100 / 2;
      int c2 = i2 - 100 / 2;
      host[i1 + 100 * i2] = (c1 * c1 + c2 * c2 < 100?1.0f : 0.0f);
    }
}
/* Generated by BuildRunFunc */

static float __PSStencilRun_0(int iter,struct __PSStencil_kernel_k1 s0,struct __PSStencil_kernel_k2 s1,struct __PSStencil_kernel_k3 s2,struct __PSStencil_kernel_step s3,struct __PSStencil_kernel_k1 s4,struct __PSStencil_kernel_k2 s5,struct __PSStencil_kernel_k3 s6,struct __PSStencil_kernel_step s7)
/* Generated by BuildRunFuncBody */
{
  int i;
  for (i = 0; i < iter; ++i) {
    __PSStencilRun_kernel_k1(&s0);
    __PSStencilRun_kernel_k2(&s1);
    __PSStencilRun_kernel_k3(&s2);
    __PSStencilRun_kernel_step(&s3);
    __PSStencilRun_kernel_k1(&s4);
    __PSStencilRun_kernel_k2(&s5);
    __PSStencilRun_kernel_k3(&s6);
    __PSStencilRun_kernel_step(&s7);
  }
  return 0.00000L;
}
/* Generated by BuildRunFunc */

static float __PSStencilRun_1(int iter,struct __PSStencil_kernel_k1 s0,struct __PSStencil_kernel_k2 s1,struct __PSStencil_kernel_k3 s2,struct __PSStencil_kernel_step s3)
/* Generated by BuildRunFuncBody */
{
  int i;
  for (i = 0; i < iter; ++i) {
    __PSStencilRun_kernel_k1(&s0);
    __PSStencilRun_kernel_k2(&s1);
    __PSStencilRun_kernel_k3(&s2);
    __PSStencilRun_kernel_step(&s3);
  }
  return 0.00000L;
}
/* Generated by BuildRunFunc */

static float __PSStencilRun_2(int iter,struct __PSStencil_kernel_k1 s0,struct __PSStencil_kernel_k2 s1,struct __PSStencil_kernel_k3 s2,struct __PSStencil_kernel_step s3)
/* Generated by BuildRunFuncBody */
{
  int i;
  for (i = 0; i < iter; ++i) {
    __PSStencilRun_kernel_k1(&s0);
    __PSStencilRun_kernel_k2(&s1);
    __PSStencilRun_kernel_k3(&s2);
    __PSStencilRun_kernel_step(&s3);
  }
  return 0.00000L;
}

int main(int argc,char **argv)
{
  if (argc != 2) {
    usage:
    printf("Usage: %s (bench | out)",argv[0]);
    return 0;
  }
  float *host = (float *)(malloc(sizeof(float ) * 100 * 100));
  createHost(host);
  PSDomain2D dom = PSDomain2DNew(0,100,0,100);
  PSInit(&argc,&argv,2,100,100);
{
    int dims[3] = {100, 100, 0};
    __PSGridTypeInfo type_info = {2, sizeof(float ), 0};
    q = __PSGridNew(&type_info,2,dims);
  }
{
    int dims[3] = {100, 100, 0};
    __PSGridTypeInfo type_info = {2, sizeof(float ), 0};
    k1 = __PSGridNew(&type_info,2,dims);
  }
{
    int dims[3] = {100, 100, 0};
    __PSGridTypeInfo type_info = {2, sizeof(float ), 0};
    k2 = __PSGridNew(&type_info,2,dims);
  }
{
    int dims[3] = {100, 100, 0};
    __PSGridTypeInfo type_info = {2, sizeof(float ), 0};
    k3 = __PSGridNew(&type_info,2,dims);
  }
{
    int dims[3] = {100, 100, 0};
    __PSGridTypeInfo type_info = {2, sizeof(float ), 0};
    qo = __PSGridNew(&type_info,2,dims);
  }
  PSGridCopyin(q,host);
  if (strcmp(argv[1],"bench") == 0) {
    struct timespec start;
    struct timespec end;
    if (clock_gettime(1,&start)) 
      return 0;
    __PSStencilRun_0(500000,(__PSStencilMap_kernel_k1(dom,q,k1)),(__PSStencilMap_kernel_k2(dom,q,k1,k2)),(__PSStencilMap_kernel_k3(dom,q,k2,k3)),(__PSStencilMap_kernel_step(dom,q,k1,k2,k3,qo)),(__PSStencilMap_kernel_k1(dom,qo,k1)),(__PSStencilMap_kernel_k2(dom,qo,k1,k2)),(__PSStencilMap_kernel_k3(dom,qo,k2,k3)),(__PSStencilMap_kernel_step(dom,qo,k1,k2,k3,q)));
    if (clock_gettime(1,&end)) 
      return 0;
    long long sec = (end . tv_sec - start . tv_sec);
    printf("%lf,",((double )(sec * 1000 * 1000 * 1000 + (end . tv_nsec - start . tv_nsec))) / 1000.0 / 1000.0);
    PSGridCopyout(q,host);
  }
   else if (strcmp(argv[1],"out") == 0) {
    const int STEP = 1000;
    printf("%lf",host[0]);
    for (int q = 1; q < 100 * 100; ++q) 
      printf(",%lf",host[q]);
    printf("\n");
    for (int i = 0; i < STEP / 2; ++i) {
      __PSStencilRun_1(1,(__PSStencilMap_kernel_k1(dom,q,k1)),(__PSStencilMap_kernel_k2(dom,q,k1,k2)),(__PSStencilMap_kernel_k3(dom,q,k2,k3)),(__PSStencilMap_kernel_step(dom,q,k1,k2,k3,qo)));
      PSGridCopyout(qo,host);
      printf("%lf",host[0]);
      for (int q = 1; q < 100 * 100; ++q) 
        printf(",%lf",host[q]);
      printf("\n");
      __PSStencilRun_2(1,(__PSStencilMap_kernel_k1(dom,qo,k1)),(__PSStencilMap_kernel_k2(dom,qo,k1,k2)),(__PSStencilMap_kernel_k3(dom,qo,k2,k3)),(__PSStencilMap_kernel_step(dom,qo,k1,k2,k3,q)));
      PSGridCopyout(q,host);
      printf("%lf",host[0]);
      for (int q = 1; q < 100 * 100; ++q) 
        printf(",%lf",host[q]);
      printf("\n");
    }
  }
   else 
    goto usage;
  PSGridFree(q);
  PSGridFree(qo);
  PSFinalize();
  return 0;
}
#ifdef __cplusplus
}
#endif
