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
#define MAX_I2 100


typedef uint64_t formura_time_t;

typedef struct Formura0Navi
{
  formura_time_t time;
  double* q;
  double* q_prev;
  double* k16;
  double* k26;
  double* k36;

} Formura0Navi;

void formura_step(Formura0Navi* data)
{
  //--body start--
  for(int i2 = 0, b2 = 0;i2 < 95; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 5; ++i1, ++b1) {
      data->k16[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 95, b2 = 95;i2 < 100; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 95; ++i1, ++b1) {
      data->k16[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 5; ++i2, ++b2) {
    for(int i1 = 5, b1 = 5;i1 < 100; ++i1, ++b1) {
      data->k16[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 5, b2 = 5;i2 < 95; ++i2, ++b2) {
    for(int i1 = 5, b1 = 5;i1 < 95; ++i1, ++b1) {
      int32_t localVal_3 = 100.0;
      data->k16[b1 + b2 * 100] = 1.0e-2 * ((((data->q_prev[(i1 + 1) + i2 * 100] + data->q_prev[(i1 + -1) + i2 * 100]) + data->q_prev[i1 + (i2 + 1) * 100]) + data->q_prev[i1 + (i2 + -1) * 100]) - 4.0 * data->q_prev[i1 + i2 * 100]);
    }
  }
  //--body end--//--body start--
  for(int i2 = 5, b2 = 5;i2 < 100; ++i2, ++b2) {
    for(int i1 = 95, b1 = 95;i1 < 100; ++i1, ++b1) {
      data->k16[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 95; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 5; ++i1, ++b1) {
      data->k26[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 95, b2 = 95;i2 < 100; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 95; ++i1, ++b1) {
      data->k26[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 5; ++i2, ++b2) {
    for(int i1 = 5, b1 = 5;i1 < 100; ++i1, ++b1) {
      data->k26[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 5, b2 = 5;i2 < 95; ++i2, ++b2) {
    for(int i1 = 5, b1 = 5;i1 < 95; ++i1, ++b1) {
      int32_t localVal_3 = 100.0;
      data->k26[b1 + b2 * 100] = 1.0e-2 * (((((data->q_prev[(i1 + 1) + i2 * 100] + data->k16[(b1 + 1) + b2 * 100] / 2.0) + (data->q_prev[(i1 + -1) + i2 * 100] + data->k16[(b1 + -1) + b2 * 100] / 2.0)) + (data->q_prev[i1 + (i2 + 1) * 100] + data->k16[b1 + (b2 + 1) * 100] / 2.0)) + (data->q_prev[i1 + (i2 + -1) * 100] + data->k16[b1 + (b2 + -1) * 100] / 2.0)) - 4.0 * (data->q_prev[i1 + i2 * 100] + data->k16[b1 + b2 * 100] / 2.0));
    }
  }
  //--body end--//--body start--
  for(int i2 = 5, b2 = 5;i2 < 100; ++i2, ++b2) {
    for(int i1 = 95, b1 = 95;i1 < 100; ++i1, ++b1) {
      data->k26[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 95; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 5; ++i1, ++b1) {
      data->k36[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 95, b2 = 95;i2 < 100; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 95; ++i1, ++b1) {
      data->k36[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 5; ++i2, ++b2) {
    for(int i1 = 5, b1 = 5;i1 < 100; ++i1, ++b1) {
      data->k36[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 5, b2 = 5;i2 < 95; ++i2, ++b2) {
    for(int i1 = 5, b1 = 5;i1 < 95; ++i1, ++b1) {
      int32_t localVal_3 = 100.0;
      data->k36[b1 + b2 * 100] = 1.0e-2 * (((((data->q_prev[(i1 + 1) + i2 * 100] + data->k26[(b1 + 1) + b2 * 100] / 2.0) + (data->q_prev[(i1 + -1) + i2 * 100] + data->k26[(b1 + -1) + b2 * 100] / 2.0)) + (data->q_prev[i1 + (i2 + 1) * 100] + data->k26[b1 + (b2 + 1) * 100] / 2.0)) + (data->q_prev[i1 + (i2 + -1) * 100] + data->k26[b1 + (b2 + -1) * 100] / 2.0)) - 4.0 * (data->q_prev[i1 + i2 * 100] + data->k26[b1 + b2 * 100] / 2.0));
    }
  }
  //--body end--//--body start--
  for(int i2 = 5, b2 = 5;i2 < 100; ++i2, ++b2) {
    for(int i1 = 95, b1 = 95;i1 < 100; ++i1, ++b1) {
      data->k36[b1 + b2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 95; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 5; ++i1, ++b1) {
      data->q[i1 + i2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 95, b2 = 95;i2 < 100; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 95; ++i1, ++b1) {
      data->q[i1 + i2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 5; ++i2, ++b2) {
    for(int i1 = 5, b1 = 5;i1 < 100; ++i1, ++b1) {
      data->q[i1 + i2 * 100] = 0.0;
    }
  }
  //--body end--//--body start--
  for(int i2 = 5, b2 = 5;i2 < 95; ++i2, ++b2) {
    for(int i1 = 5, b1 = 5;i1 < 95; ++i1, ++b1) {
      int32_t localVal_3 = 100.0;
      double localVal_8 = data->q_prev[i1 + i2 * 100];
      double localVal_66 = data->k36[b1 + b2 * 100];
      data->q[i1 + i2 * 100] = (localVal_8 + (((data->k16[b1 + b2 * 100] / 6.0 + data->k26[b1 + b2 * 100] / 3.0) + localVal_66 / 3.0) + 1.0e-2 * (((((data->q_prev[(i1 + 1) + i2 * 100] + data->k36[(b1 + 1) + b2 * 100]) + (data->q_prev[(i1 + -1) + i2 * 100] + data->k36[(b1 + -1) + b2 * 100])) + (data->q_prev[i1 + (i2 + 1) * 100] + data->k36[b1 + (b2 + 1) * 100])) + (data->q_prev[i1 + (i2 + -1) * 100] + data->k36[b1 + (b2 + -1) * 100])) - 4.0 * (localVal_8 + localVal_66)) / 6.0));
    }
  }
  //--body end--//--body start--
  for(int i2 = 5, b2 = 5;i2 < 100; ++i2, ++b2) {
    for(int i1 = 95, b1 = 95;i1 < 100; ++i1, ++b1) {
      data->q[i1 + i2 * 100] = 0.0;
    }
  }
  //--body end--
}







int formura_initialize(Formura0Navi* data){
  if((data->k16 = (double *)malloc(sizeof(double)*10000)) == 0)
    return 0;
  if((data->q = (double *)malloc(sizeof(double)*10000)) == 0)
    return 0;
  if((data->q_prev = (double *)malloc(sizeof(double)*10000)) == 0)
    return 0;
  if((data->k26 = (double *)malloc(sizeof(double)*10000)) == 0)
    return 0;
  if((data->k36 = (double *)malloc(sizeof(double)*10000)) == 0)
    return 0;

  return 1;
}

void formura_setup(Formura0Navi* data, char* dumpdata)
{
  data->time = 0;
  //--body start--
  for(int i2 = 0, b2 = 0;i2 < 100; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 100; ++i1, ++b1) {
      int32_t localVal_2 = 100.0;
      double localVal_5 = (i1 - 50.0);
      double localVal_7 = (i2 - 50.0);
      data->q[i1 + i2 * 100] = ((localVal_5 * localVal_5 + localVal_7 * localVal_7) < 100.0 ? 1.0 : 0.0);
    }
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

