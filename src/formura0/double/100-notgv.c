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


} Formura0Navi;



void formura_step(Formura0Navi* data)
{
  //--body start--
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
      double localVal_9 = data->q_prev[(i1 + 1) + i2 * 100];
      double localVal_10 = data->q_prev[(i1 + -1) + i2 * 100];
      double localVal_12 = data->q_prev[i1 + (i2 + 1) * 100];
      double localVal_14 = data->q_prev[i1 + (i2 + -1) * 100];
      double localVal_19 = 1.0e-2 * ((((localVal_9 + localVal_10) + localVal_12) + localVal_14) - 4.0 * localVal_8);
      double localVal_22 = (localVal_8 + localVal_19 / 2.0);
      double localVal_23 = data->q_prev[(i1 + 2) + i2 * 100];
      double localVal_25 = data->q_prev[(i1 + 1) + (i2 + 1) * 100];
      double localVal_27 = data->q_prev[(i1 + 1) + (i2 + -1) * 100];
      double localVal_33 = (localVal_9 + 1.0e-2 * ((((localVal_23 + localVal_8) + localVal_25) + localVal_27) - 4.0 * localVal_9) / 2.0);
      double localVal_34 = data->q_prev[(i1 + -2) + i2 * 100];
      double localVal_36 = data->q_prev[(i1 + -1) + (i2 + 1) * 100];
      double localVal_38 = data->q_prev[(i1 + -1) + (i2 + -1) * 100];
      double localVal_44 = (localVal_10 + 1.0e-2 * ((((localVal_8 + localVal_34) + localVal_36) + localVal_38) - 4.0 * localVal_10) / 2.0);
      double localVal_47 = data->q_prev[i1 + (i2 + 2) * 100];
      double localVal_54 = (localVal_12 + 1.0e-2 * ((((localVal_25 + localVal_36) + localVal_47) + localVal_8) - 4.0 * localVal_12) / 2.0);
      double localVal_58 = data->q_prev[i1 + (i2 + -2) * 100];
      double localVal_64 = (localVal_14 + 1.0e-2 * ((((localVal_27 + localVal_38) + localVal_8) + localVal_58) - 4.0 * localVal_14) / 2.0);
      double localVal_68 = 1.0e-2 * ((((localVal_33 + localVal_44) + localVal_54) + localVal_64) - 4.0 * localVal_22);
      double localVal_70 = (localVal_8 + localVal_68 / 2.0);
      double localVal_71 = data->q_prev[(i1 + 3) + i2 * 100];
      double localVal_73 = data->q_prev[(i1 + 2) + (i2 + 1) * 100];
      double localVal_75 = data->q_prev[(i1 + 2) + (i2 + -1) * 100];
      double localVal_81 = (localVal_23 + 1.0e-2 * ((((localVal_71 + localVal_9) + localVal_73) + localVal_75) - 4.0 * localVal_23) / 2.0);
      double localVal_84 = data->q_prev[(i1 + 1) + (i2 + 2) * 100];
      double localVal_91 = (localVal_25 + 1.0e-2 * ((((localVal_73 + localVal_12) + localVal_84) + localVal_9) - 4.0 * localVal_25) / 2.0);
      double localVal_95 = data->q_prev[(i1 + 1) + (i2 + -2) * 100];
      double localVal_101 = (localVal_27 + 1.0e-2 * ((((localVal_75 + localVal_14) + localVal_9) + localVal_95) - 4.0 * localVal_27) / 2.0);
      double localVal_107 = (localVal_9 + 1.0e-2 * ((((localVal_81 + localVal_22) + localVal_91) + localVal_101) - 4.0 * localVal_33) / 2.0);
      double localVal_108 = data->q_prev[(i1 + -3) + i2 * 100];
      double localVal_110 = data->q_prev[(i1 + -2) + (i2 + 1) * 100];
      double localVal_112 = data->q_prev[(i1 + -2) + (i2 + -1) * 100];
      double localVal_118 = (localVal_34 + 1.0e-2 * ((((localVal_10 + localVal_108) + localVal_110) + localVal_112) - 4.0 * localVal_34) / 2.0);
      double localVal_121 = data->q_prev[(i1 + -1) + (i2 + 2) * 100];
      double localVal_128 = (localVal_36 + 1.0e-2 * ((((localVal_12 + localVal_110) + localVal_121) + localVal_10) - 4.0 * localVal_36) / 2.0);
      double localVal_132 = data->q_prev[(i1 + -1) + (i2 + -2) * 100];
      double localVal_138 = (localVal_38 + 1.0e-2 * ((((localVal_14 + localVal_112) + localVal_10) + localVal_132) - 4.0 * localVal_38) / 2.0);
      double localVal_144 = (localVal_10 + 1.0e-2 * ((((localVal_22 + localVal_118) + localVal_128) + localVal_138) - 4.0 * localVal_44) / 2.0);
      double localVal_148 = data->q_prev[i1 + (i2 + 3) * 100];
      double localVal_155 = (localVal_47 + 1.0e-2 * ((((localVal_84 + localVal_121) + localVal_148) + localVal_12) - 4.0 * localVal_47) / 2.0);
      double localVal_162 = (localVal_12 + 1.0e-2 * ((((localVal_91 + localVal_128) + localVal_155) + localVal_22) - 4.0 * localVal_54) / 2.0);
      double localVal_168 = data->q_prev[i1 + (i2 + -3) * 100];
      double localVal_174 = (localVal_58 + 1.0e-2 * ((((localVal_95 + localVal_132) + localVal_14) + localVal_168) - 4.0 * localVal_58) / 2.0);
      double localVal_180 = (localVal_14 + 1.0e-2 * ((((localVal_101 + localVal_138) + localVal_22) + localVal_174) - 4.0 * localVal_64) / 2.0);
      double localVal_184 = 1.0e-2 * ((((localVal_107 + localVal_144) + localVal_162) + localVal_180) - 4.0 * localVal_70);
      double localVal_188 = data->q_prev[(i1 + 3) + (i2 + 1) * 100];
      double localVal_190 = data->q_prev[(i1 + 3) + (i2 + -1) * 100];
      double localVal_199 = data->q_prev[(i1 + 2) + (i2 + 2) * 100];
      double localVal_206 = (localVal_73 + 1.0e-2 * ((((localVal_188 + localVal_25) + localVal_199) + localVal_23) - 4.0 * localVal_73) / 2.0);
      double localVal_210 = data->q_prev[(i1 + 2) + (i2 + -2) * 100];
      double localVal_216 = (localVal_75 + 1.0e-2 * ((((localVal_190 + localVal_27) + localVal_23) + localVal_210) - 4.0 * localVal_75) / 2.0);
      double localVal_226 = data->q_prev[(i1 + 1) + (i2 + 3) * 100];
      double localVal_233 = (localVal_84 + 1.0e-2 * ((((localVal_199 + localVal_47) + localVal_226) + localVal_25) - 4.0 * localVal_84) / 2.0);
      double localVal_240 = (localVal_25 + 1.0e-2 * ((((localVal_206 + localVal_54) + localVal_233) + localVal_33) - 4.0 * localVal_91) / 2.0);
      double localVal_246 = data->q_prev[(i1 + 1) + (i2 + -3) * 100];
      double localVal_252 = (localVal_95 + 1.0e-2 * ((((localVal_210 + localVal_58) + localVal_27) + localVal_246) - 4.0 * localVal_95) / 2.0);
      double localVal_258 = (localVal_27 + 1.0e-2 * ((((localVal_216 + localVal_64) + localVal_33) + localVal_252) - 4.0 * localVal_101) / 2.0);
      double localVal_266 = data->q_prev[(i1 + -3) + (i2 + 1) * 100];
      double localVal_268 = data->q_prev[(i1 + -3) + (i2 + -1) * 100];
      double localVal_277 = data->q_prev[(i1 + -2) + (i2 + 2) * 100];
      double localVal_284 = (localVal_110 + 1.0e-2 * ((((localVal_36 + localVal_266) + localVal_277) + localVal_34) - 4.0 * localVal_110) / 2.0);
      double localVal_288 = data->q_prev[(i1 + -2) + (i2 + -2) * 100];
      double localVal_294 = (localVal_112 + 1.0e-2 * ((((localVal_38 + localVal_268) + localVal_34) + localVal_288) - 4.0 * localVal_112) / 2.0);
      double localVal_304 = data->q_prev[(i1 + -1) + (i2 + 3) * 100];
      double localVal_311 = (localVal_121 + 1.0e-2 * ((((localVal_47 + localVal_277) + localVal_304) + localVal_36) - 4.0 * localVal_121) / 2.0);
      double localVal_318 = (localVal_36 + 1.0e-2 * ((((localVal_54 + localVal_284) + localVal_311) + localVal_44) - 4.0 * localVal_128) / 2.0);
      double localVal_324 = data->q_prev[(i1 + -1) + (i2 + -3) * 100];
      double localVal_330 = (localVal_132 + 1.0e-2 * ((((localVal_58 + localVal_288) + localVal_38) + localVal_324) - 4.0 * localVal_132) / 2.0);
      double localVal_336 = (localVal_38 + 1.0e-2 * ((((localVal_64 + localVal_294) + localVal_44) + localVal_330) - 4.0 * localVal_138) / 2.0);
      data->q[i1 + i2 * 100] = (localVal_8 + (((localVal_19 / 6.0 + localVal_68 / 3.0) + localVal_184 / 3.0) + 1.0e-2 * (((((localVal_9 + 1.0e-2 * (((((localVal_23 + 1.0e-2 * (((((localVal_71 + 1.0e-2 * ((((data->q_prev[(i1 + 4) + i2 * 100] + localVal_23) + localVal_188) + localVal_190) - 4.0 * localVal_71) / 2.0) + localVal_33) + localVal_206) + localVal_216) - 4.0 * localVal_81) / 2.0) + localVal_70) + localVal_240) + localVal_258) - 4.0 * localVal_107)) + (localVal_10 + 1.0e-2 * ((((localVal_70 + (localVal_34 + 1.0e-2 * ((((localVal_44 + (localVal_108 + 1.0e-2 * ((((localVal_34 + data->q_prev[(i1 + -4) + i2 * 100]) + localVal_266) + localVal_268) - 4.0 * localVal_108) / 2.0)) + localVal_284) + localVal_294) - 4.0 * localVal_118) / 2.0)) + localVal_318) + localVal_336) - 4.0 * localVal_144))) + (localVal_12 + 1.0e-2 * ((((localVal_240 + localVal_318) + (localVal_47 + 1.0e-2 * ((((localVal_233 + localVal_311) + (localVal_148 + 1.0e-2 * ((((localVal_226 + localVal_304) + data->q_prev[i1 + (i2 + 4) * 100]) + localVal_47) - 4.0 * localVal_148) / 2.0)) + localVal_54) - 4.0 * localVal_155) / 2.0)) + localVal_70) - 4.0 * localVal_162))) + (localVal_14 + 1.0e-2 * ((((localVal_258 + localVal_336) + localVal_70) + (localVal_58 + 1.0e-2 * ((((localVal_252 + localVal_330) + localVal_64) + (localVal_168 + 1.0e-2 * ((((localVal_246 + localVal_324) + localVal_58) + data->q_prev[i1 + (i2 + -4) * 100]) - 4.0 * localVal_168) / 2.0)) - 4.0 * localVal_174) / 2.0)) - 4.0 * localVal_180))) - 4.0 * (localVal_8 + localVal_184)) / 6.0));
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
  if((data->q = (double *)malloc(sizeof(double)*10000)) == 0)
    return 0;
  if((data->q_prev = (double *)malloc(sizeof(double)*10000)) == 0)
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
