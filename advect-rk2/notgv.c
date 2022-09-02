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
  double* q;
  double* q_prev;
  double* k13;
  double* k23;
  double* k33;

} Formura0Navi;



void formura_step(Formura0Navi* data)
{
  //--body start--
  for(int i1 = 0, b1 = 0;i1 < 5; ++i1, ++b1) {
    data->q[i1] = 1.0;
  }
  //--body end--//--body start--
  for(int i1 = 5, b1 = 5;i1 < 100; ++i1, ++b1) {
    int32_t localVal_3 = 100.0;
    double localVal_7 = data->q_prev[i1];
    double localVal_8 = data->q_prev[(i1 + -1)];
    double localVal_10 = 1.0e-2 * (localVal_8 - localVal_7);
    double localVal_14 = data->q_prev[(i1 + -2)];
    double localVal_18 = (localVal_8 + 1.0e-2 * (localVal_14 - localVal_8) / 2.0);
    double localVal_20 = 1.0e-2 * (localVal_18 - (localVal_7 + localVal_10 / 2.0));
    double localVal_23 = data->q_prev[(i1 + -3)];
    double localVal_27 = (localVal_14 + 1.0e-2 * (localVal_23 - localVal_14) / 2.0);
    double localVal_31 = (localVal_8 + 1.0e-2 * (localVal_27 - localVal_18) / 2.0);
    double localVal_33 = 1.0e-2 * (localVal_31 - (localVal_7 + localVal_20 / 2.0));
    data->q[i1] = (localVal_7 + (((localVal_10 / 6.0 + localVal_20 / 3.0) + localVal_33 / 3.0) + 1.0e-2 * ((localVal_8 + 1.0e-2 * ((localVal_14 + 1.0e-2 * ((localVal_23 + 1.0e-2 * (data->q_prev[(i1 + -4)] - localVal_23) / 2.0) - localVal_27) / 2.0) - localVal_31)) - (localVal_7 + localVal_33)) / 6.0));
  }
  //--body end--
}







int formura_initialize(Formura0Navi* data){
  if((data->q = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;
  if((data->q_prev = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;

  return 1;
}

void formura_setup(Formura0Navi* data, char* dumpdata)
{
  data->time = 0;
  //--body start--
  for(int i1 = 0, b1 = 0;i1 < 100; ++i1, ++b1) {
    data->q[i1] = (i1 < 20.0 ? 1.0 : 0.0);
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
