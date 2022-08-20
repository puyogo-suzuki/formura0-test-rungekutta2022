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
  float* q;
  float* q_prev;
  float* k13;
  float* k23;
  float* k33;

} Formura0Navi;

void formura_step(Formura0Navi* data)
{
  //--body start--
  for(int t1 = 0; t1 < 1000000; t1 += 10000) {
    //--body start--
    {
      int i1 = 0;
      if(t1 - 3 <= i1 && i1 < t1 + 10000 + 3) {
        data->k13[i1] = 0.0f;
      }
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-3, 1), i1max = MAX(t1, 1); i1 < i1max; ++i1) {
      int32_t localVal_6 = 1000000.0f;
      data->k13[i1] = (data->q_prev[(i1 + -1)] - data->q_prev[i1]) * 0.1f;
    }
    for(int i1 = MAX(t1, 1), i1max = MIN(1000000, t1 + 10000 + 3); i1 < i1max; ++i1) {
      int32_t localVal_6 = 1000000.0f;
      data->k13[i1] = (data->q_prev[(i1 + -1)] - data->q_prev[i1]) * 0.1f;
    }
    //--body end--//--body start--
    {
      int i1 = 0;
      if(t1 - 2 <= i1 && i1 < t1 + 10000 + 2) {
        data->k23[i1] = 0.0f;
      }
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-2, 1), i1max = MAX(t1, 1); i1 < i1max; ++i1) {
      int32_t localVal_6 = 1000000.0f;
      data->k23[i1] = ((data->q_prev[(i1 + -1)] + data->k13[(i1 + -1)] / 2.0f) - (data->q_prev[i1] + data->k13[i1] / 2.0f)) * 0.1f;
    }
    for(int i1 = MAX(t1, 1), i1max = MIN(1000000, t1 + 10000 + 2); i1 < i1max; ++i1) {
      int32_t localVal_6 = 1000000.0f;
      data->k23[i1] = ((data->q_prev[(i1 + -1)] + data->k13[(i1 + -1)] / 2.0f) - (data->q_prev[i1] + data->k13[i1] / 2.0f)) * 0.1f;
    }
    //--body end--//--body start--
    {
      int i1 = 0;
      if(t1 - 1 <= i1 && i1 < t1 + 10000 + 1) {
        data->k33[i1] = 0.0f;
      }
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-1, 1), i1max = MAX(t1, 1); i1 < i1max; ++i1) {
      int32_t localVal_6 = 1000000.0f;
      data->k33[i1] = ((data->q_prev[(i1 + -1)] + data->k23[(i1 + -1)] / 2.0f) - (data->q_prev[i1] + data->k23[i1] / 2.0f)) * 0.1f;
    }
    for(int i1 = MAX(t1, 1), i1max = MIN(1000000, t1 + 10000 + 1); i1 < i1max; ++i1) {
      int32_t localVal_6 = 1000000.0f;
      data->k33[i1] = ((data->q_prev[(i1 + -1)] + data->k23[(i1 + -1)] / 2.0f) - (data->q_prev[i1] + data->k23[i1] / 2.0f)) * 0.1f;
    }
    //--body end--//--body start--
    {
      int i1 = 0;
      if(t1 - 0 <= i1 && i1 < t1 + 10000 + 0) {
        data->q[i1] = 1.0f;
      }
    }
    //--body end--//--body start--
    for(int i1 = MAX(t1-0, 1), i1max = MAX(t1, 1); i1 < i1max; ++i1) {
      float localVal_0 = data->q_prev[i1];
      int32_t localVal_6 = 1000000.0f;
      float localVal_31 = data->k33[i1];
      data->q[i1] = (localVal_0 + (((data->k13[i1] / 6.0f + data->k23[i1] / 3.0f) + localVal_31 / 3.0f) + ((data->q_prev[(i1 + -1)] + data->k33[(i1 + -1)]) - (localVal_0 + localVal_31)) * 0.1f / 6.0f));
    }
    for(int i1 = MAX(t1, 1), i1max = MIN(1000000, t1 + 10000 + 0); i1 < i1max; ++i1) {
      float localVal_0 = data->q_prev[i1];
      int32_t localVal_6 = 1000000.0f;
      float localVal_31 = data->k33[i1];
      data->q[i1] = (localVal_0 + (((data->k13[i1] / 6.0f + data->k23[i1] / 3.0f) + localVal_31 / 3.0f) + ((data->q_prev[(i1 + -1)] + data->k33[(i1 + -1)]) - (localVal_0 + localVal_31)) * 0.1f / 6.0f));
    }
    //--body end--
  }
  //--body end--
}







int formura_initialize(Formura0Navi* data){
  if((data->q = (float *)malloc(sizeof(float)*1000000)) == 0)
    return 0;
  if((data->q_prev = (float *)malloc(sizeof(float)*1000000)) == 0)
    return 0;
  if((data->k13 = (float *)malloc(sizeof(float)*1000000)) == 0)
    return 0;
  if((data->k23 = (float *)malloc(sizeof(float)*1000000)) == 0)
    return 0;
  if((data->k33 = (float *)malloc(sizeof(float)*1000000)) == 0)
    return 0;

  return 1;
}

void formura_setup(Formura0Navi* data, char* dumpdata)
{
  data->time = 0;
  //--body start--
  for(int t1 = 0; t1 < 1000000; t1 += 10000) {
    //--body start--
    for(int i1 = MAX(t1-0, 0), i1max = MAX(t1, 0); i1 < i1max; ++i1) {
      data->q[i1] = (i1 > 20.0f ? 0.0f : 1.0f);
    }
    for(int i1 = MAX(t1, 0), i1max = MIN(1000000, t1 + 10000 + 0); i1 < i1max; ++i1) {
      data->q[i1] = (i1 > 20.0f ? 0.0f : 1.0f);
    }
    //--body end--
  }
  //--body end--
  {
    float* tmp = data->q;
    data->q = data->q_prev;
    data->q_prev = tmp;
  }

}

void formura_forward(Formura0Navi* data)
{
  formura_step(data);
  {
    float* tmp = data->q;
    data->q = data->q_prev;
    data->q_prev = tmp;
  }

  data->time++;
}

int main(void) {
  Formura0Navi data;
#if BENCH
#if defined(_WIN32)
  LARGE_INTEGER start, freq, end;
  if(!QueryPerformanceFrequency(&freq)) return 0;
  if(!QueryPerformanceCounter(&start)) return 0;
  if(!formura_initialize(&data)) {
    printf("Allocation failed.\n");
    return 0;
  }
  formura_setup(&data, NULL);
  for(int i = 0; i < STEP; ++i) {
    formura_forward(&data);
  }
  if(!QueryPerformanceCounter(&end)) return 0;
  printf("%lf,", (double)(end.QuadPart - start.QuadPart) * 1000 / freq.QuadPart);
#else
  struct timespec start, end;
  if(clock_gettime(CLOCK_MONOTONIC, &start)) return 0;
  if(!formura_initialize(&data)) {
    printf("Allocation failed.\n");
    return 0;
  }
  formura_setup(&data, NULL);
  for(int i = 0; i < STEP; ++i) {
    formura_forward(&data);
  }
  if(clock_gettime(CLOCK_MONOTONIC, &end)) return 0;
  long long sec = end.tv_sec - start.tv_sec;
  printf("%lf,", (double)(sec * 1000*1000*1000 + (end.tv_nsec - start.tv_nsec)) / 1000.0 / 1000.0);
#endif
#else
  if(!formura_initialize(&data)) {
    printf("Allocation failed.\n");
    return 0;
  }
  formura_setup(&data, NULL);
  printf("%lf", data.q_prev[0]);
  for(int q = 1; q < MAX_I1; ++q)
    printf(",%lf", data.q_prev[q]);
  printf("\n");
  for(int i = 0; i < STEP; ++i) {
    formura_forward(&data);
    printf("%lf", data.q_prev[0]);
    for(int q = 1; q < MAX_I1; ++q)
      printf(",%lf", data.q_prev[q]);
    printf("\n");
  }
#endif
  return 0;
}
