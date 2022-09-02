#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#if defined(_WIN32)
#include <Windows.h>
#pragma comment(lib, "winmm.lib")
#else
#include <time.h>
#endif

#define TRUE 1
#define FALSE 0

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

#define MAX_I1 1000000


typedef uint64_t formura_time_t;

typedef struct Formura0Navi
{
  formura_time_t time;
  double* q;
  double* q_prev;
  double* k13;
  double* k23;
  double* k33;

} Formura0Navi;



void formura_step(Formura0Navi* data)
{
  //--body start--
  for(int t1 = 0; t1 < 1000000; t1 += 50000) {
    //--body start--
    for(int i1 = MAX(t1-3, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      data->k13[(b1 + 3)] = 0.0;
    }
    for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 50000 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      data->k13[(b1 + 3)] = 0.0;
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-3, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      int32_t localVal_3 = 1000000.0;
      data->k13[(b1 + 3)] = 1.0e-2 * (data->q_prev[(i1 + -1)] - data->q_prev[i1]);
    }
    for(int i1 = MAX(t1, 5), i1max = MIN(1000000, t1 + 50000 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      int32_t localVal_3 = 1000000.0;
      data->k13[(b1 + 3)] = 1.0e-2 * (data->q_prev[(i1 + -1)] - data->q_prev[i1]);
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-2, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      data->k23[(b1 + 2)] = 0.0;
    }
    for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 50000 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      data->k23[(b1 + 2)] = 0.0;
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-2, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      int32_t localVal_3 = 1000000.0;
      data->k23[(b1 + 2)] = 1.0e-2 * ((data->q_prev[(i1 + -1)] + data->k13[(b1 + -1 + 3)] / 2.0) - (data->q_prev[i1] + data->k13[(b1 + 3)] / 2.0));
    }
    for(int i1 = MAX(t1, 5), i1max = MIN(1000000, t1 + 50000 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      int32_t localVal_3 = 1000000.0;
      data->k23[(b1 + 2)] = 1.0e-2 * ((data->q_prev[(i1 + -1)] + data->k13[(b1 + -1 + 3)] / 2.0) - (data->q_prev[i1] + data->k13[(b1 + 3)] / 2.0));
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-1, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      data->k33[(b1 + 1)] = 0.0;
    }
    for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 50000 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      data->k33[(b1 + 1)] = 0.0;
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-1, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      int32_t localVal_3 = 1000000.0;
      data->k33[(b1 + 1)] = 1.0e-2 * ((data->q_prev[(i1 + -1)] + data->k23[(b1 + -1 + 2)] / 2.0) - (data->q_prev[i1] + data->k23[(b1 + 2)] / 2.0));
    }
    for(int i1 = MAX(t1, 5), i1max = MIN(1000000, t1 + 50000 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      int32_t localVal_3 = 1000000.0;
      data->k33[(b1 + 1)] = 1.0e-2 * ((data->q_prev[(i1 + -1)] + data->k23[(b1 + -1 + 2)] / 2.0) - (data->q_prev[i1] + data->k23[(b1 + 2)] / 2.0));
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-0, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      data->q[i1] = 1.0;
    }
    for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 50000 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      data->q[i1] = 1.0;
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-0, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      int32_t localVal_3 = 1000000.0;
      double localVal_7 = data->q_prev[i1];
      double localVal_31 = data->k33[(b1 + 1)];
      data->q[i1] = (localVal_7 + (((data->k13[(b1 + 3)] / 6.0 + data->k23[(b1 + 2)] / 3.0) + localVal_31 / 3.0) + 1.0e-2 * ((data->q_prev[(i1 + -1)] + data->k33[(b1 + -1 + 1)]) - (localVal_7 + localVal_31)) / 6.0));
    }
    for(int i1 = MAX(t1, 5), i1max = MIN(1000000, t1 + 50000 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      int32_t localVal_3 = 1000000.0;
      double localVal_7 = data->q_prev[i1];
      double localVal_31 = data->k33[(b1 + 1)];
      data->q[i1] = (localVal_7 + (((data->k13[(b1 + 3)] / 6.0 + data->k23[(b1 + 2)] / 3.0) + localVal_31 / 3.0) + 1.0e-2 * ((data->q_prev[(i1 + -1)] + data->k33[(b1 + -1 + 1)]) - (localVal_7 + localVal_31)) / 6.0));
    }
    //--body end--
  }
  //--body end--
}







int formura_initialize(Formura0Navi* data){
  if((data->q = (double *)malloc(sizeof(double)*1000000)) == 0)
    return 0;
  if((data->q_prev = (double *)malloc(sizeof(double)*1000000)) == 0)
    return 0;
  if((data->k13 = (double *)malloc(sizeof(double)*50006)) == 0)
    return 0;
  if((data->k23 = (double *)malloc(sizeof(double)*50004)) == 0)
    return 0;
  if((data->k33 = (double *)malloc(sizeof(double)*50002)) == 0)
    return 0;

  return 1;
}

void formura_setup(Formura0Navi* data, char* dumpdata)
{
  data->time = 0;
  //--body start--
  for(int t1 = 0; t1 < 1000000; t1 += 50000) {
    //--body start--
    for(int i1 = MAX(t1-0, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      data->q[i1] = (i1 < 20.0 ? 1.0 : 0.0);
    }
    for(int i1 = MAX(t1, 0), i1max = MIN(1000000, t1 + 50000 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
      data->q[i1] = (i1 < 20.0 ? 1.0 : 0.0);
    }
    //--body end--
  }
  //--body end--
  {
    double* tmp = data->q;
    data->q = data->q_prev;
    data->q_prev = tmp;
  }

}

void formura_forward(Formura0Navi* data)
{
  formura_step(data);
  {
    double* tmp = data->q;
    data->q = data->q_prev;
    data->q_prev = tmp;
  }

  data->time++;
}

int main(void) {
  Formura0Navi data;
  if(!formura_initialize(&data)) {
    printf("Allocation failed.\n");
    return 0;
  }
  formura_setup(&data, NULL);
#if BENCH
#if defined(_WIN32)
  LARGE_INTEGER start, freq, end;
  if(!QueryPerformanceFrequency(&freq)) return 0;
  if(!QueryPerformanceCounter(&start)) return 0;
  for(int i = 0; i < STEP; ++i) {
    formura_forward(&data);
  }
  if(!QueryPerformanceCounter(&end)) return 0;
  printf("%lf,", (double)(end.QuadPart - start.QuadPart) * 1000 / freq.QuadPart);
#else
  struct timespec start, end;
  if(clock_gettime(CLOCK_MONOTONIC, &start)) return 0;
  for(int i = 0; i < STEP; ++i) {
    formura_forward(&data);
  }
  if(clock_gettime(CLOCK_MONOTONIC, &end)) return 0;
  long long sec = end.tv_sec - start.tv_sec;
  printf("%lf,", (double)(sec * 1000*1000*1000 + (end.tv_nsec - start.tv_nsec)) / 1000.0 / 1000.0);
#endif
#else
  printf("%lf", data.q_prev[0]);
  for(int q = 1; q < MAX_I1*MAX_I2; ++q)
    printf(",%lf", data.q_prev[q]);
  printf("\n");
  for(int i = 0; i < STEP; ++i) {
    formura_forward(&data);
    printf("%lf", data.q_prev[0]);
    for(int q = 1; q < MAX_I1*MAX_I2; ++q)
      printf(",%lf", data.q_prev[q]);
    printf("\n");
  }
#endif
  return 0;
}
