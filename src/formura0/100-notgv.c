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

#define MAX_I1 100

typedef uint64_t formura_time_t;

typedef struct Formura0Navi
{
  formura_time_t time;
  float* q;
  float* q_prev;


} Formura0Navi;

void formura_step(Formura0Navi* data)
{
  //--body start--
  for(int i1 = 0;i1 < 5; ++i1) {
    data->q[i1] = 1.0f;
  }
  //--body end--//--body start--
  for(int i1 = 5;i1 < 100; ++i1) {
    float localVal_0 = data->q_prev[i1];
    float localVal_1 = data->q_prev[(i1 + -1)];
    int32_t localVal_6 = 100.0f;
    float localVal_10 = (localVal_1 - localVal_0) * 0.1f;
    float localVal_14 = data->q_prev[(i1 + -2)];
    float localVal_18 = (localVal_1 + (localVal_14 - localVal_1) * 0.1f / 2.0f);
    float localVal_20 = (localVal_18 - (localVal_0 + localVal_10 / 2.0f)) * 0.1f;
    float localVal_23 = data->q_prev[(i1 + -3)];
    float localVal_27 = (localVal_14 + (localVal_23 - localVal_14) * 0.1f / 2.0f);
    float localVal_31 = (localVal_1 + (localVal_27 - localVal_18) * 0.1f / 2.0f);
    float localVal_33 = (localVal_31 - (localVal_0 + localVal_20 / 2.0f)) * 0.1f;
    data->q[i1] = (localVal_0 + (((localVal_10 / 6.0f + localVal_20 / 3.0f) + localVal_33 / 3.0f) + ((localVal_1 + ((localVal_14 + ((localVal_23 + (data->q_prev[(i1 + -4)] - localVal_23) * 0.1f / 2.0f) - localVal_27) * 0.1f / 2.0f) - localVal_31) * 0.1f) - (localVal_0 + localVal_33)) * 0.1f / 6.0f));
  }
  //--body end--
}







int formura_initialize(Formura0Navi* data){
  if((data->q = (float *)malloc(sizeof(float)*100)) == 0)
    return 0;
  if((data->q_prev = (float *)malloc(sizeof(float)*100)) == 0)
    return 0;

  return 1;
}

void formura_setup(Formura0Navi* data, char* dumpdata)
{
  data->time = 0;
  //--body start--
  for(int i1 = 0;i1 < 100; ++i1) {
    data->q[i1] = (i1 > 20.0f ? 0.0f : 1.0f);
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
