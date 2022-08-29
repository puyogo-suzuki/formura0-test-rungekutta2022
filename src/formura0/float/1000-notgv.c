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

#define MAX_I1 1000
#define MAX_I2 1000


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
  for(int i2 = 0, b2 = 0;i2 < 995; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 5; ++i1, ++b1) {
      data->q[i1 + i2 * 1000] = 0.0f;
    }
  }
  //--body end--//--body start--
  for(int i2 = 995, b2 = 995;i2 < 1000; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 995; ++i1, ++b1) {
      data->q[i1 + i2 * 1000] = 0.0f;
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 5; ++i2, ++b2) {
    for(int i1 = 5, b1 = 5;i1 < 1000; ++i1, ++b1) {
      data->q[i1 + i2 * 1000] = 0.0f;
    }
  }
  //--body end--//--body start--
  for(int i2 = 5, b2 = 5;i2 < 995; ++i2, ++b2) {
    for(int i1 = 5, b1 = 5;i1 < 995; ++i1, ++b1) {
      int32_t localVal_3 = 1000.0f;
      float localVal_8 = data->q_prev[i1 + i2 * 1000];
      float localVal_9 = data->q_prev[(i1 + 1) + i2 * 1000];
      float localVal_10 = data->q_prev[(i1 + -1) + i2 * 1000];
      float localVal_12 = data->q_prev[i1 + (i2 + 1) * 1000];
      float localVal_14 = data->q_prev[i1 + (i2 + -1) * 1000];
      float localVal_19 = 0.1f * ((((localVal_9 + localVal_10) + localVal_12) + localVal_14) - 4.0f * localVal_8);
      float localVal_22 = (localVal_8 + localVal_19 / 2.0f);
      float localVal_23 = data->q_prev[(i1 + 2) + i2 * 1000];
      float localVal_25 = data->q_prev[(i1 + 1) + (i2 + 1) * 1000];
      float localVal_27 = data->q_prev[(i1 + 1) + (i2 + -1) * 1000];
      float localVal_33 = (localVal_9 + 0.1f * ((((localVal_23 + localVal_8) + localVal_25) + localVal_27) - 4.0f * localVal_9) / 2.0f);
      float localVal_34 = data->q_prev[(i1 + -2) + i2 * 1000];
      float localVal_36 = data->q_prev[(i1 + -1) + (i2 + 1) * 1000];
      float localVal_38 = data->q_prev[(i1 + -1) + (i2 + -1) * 1000];
      float localVal_44 = (localVal_10 + 0.1f * ((((localVal_8 + localVal_34) + localVal_36) + localVal_38) - 4.0f * localVal_10) / 2.0f);
      float localVal_47 = data->q_prev[i1 + (i2 + 2) * 1000];
      float localVal_54 = (localVal_12 + 0.1f * ((((localVal_25 + localVal_36) + localVal_47) + localVal_8) - 4.0f * localVal_12) / 2.0f);
      float localVal_58 = data->q_prev[i1 + (i2 + -2) * 1000];
      float localVal_64 = (localVal_14 + 0.1f * ((((localVal_27 + localVal_38) + localVal_8) + localVal_58) - 4.0f * localVal_14) / 2.0f);
      float localVal_68 = 0.1f * ((((localVal_33 + localVal_44) + localVal_54) + localVal_64) - 4.0f * localVal_22);
      float localVal_70 = (localVal_8 + localVal_68 / 2.0f);
      float localVal_71 = data->q_prev[(i1 + 3) + i2 * 1000];
      float localVal_73 = data->q_prev[(i1 + 2) + (i2 + 1) * 1000];
      float localVal_75 = data->q_prev[(i1 + 2) + (i2 + -1) * 1000];
      float localVal_81 = (localVal_23 + 0.1f * ((((localVal_71 + localVal_9) + localVal_73) + localVal_75) - 4.0f * localVal_23) / 2.0f);
      float localVal_84 = data->q_prev[(i1 + 1) + (i2 + 2) * 1000];
      float localVal_91 = (localVal_25 + 0.1f * ((((localVal_73 + localVal_12) + localVal_84) + localVal_9) - 4.0f * localVal_25) / 2.0f);
      float localVal_95 = data->q_prev[(i1 + 1) + (i2 + -2) * 1000];
      float localVal_101 = (localVal_27 + 0.1f * ((((localVal_75 + localVal_14) + localVal_9) + localVal_95) - 4.0f * localVal_27) / 2.0f);
      float localVal_107 = (localVal_9 + 0.1f * ((((localVal_81 + localVal_22) + localVal_91) + localVal_101) - 4.0f * localVal_33) / 2.0f);
      float localVal_108 = data->q_prev[(i1 + -3) + i2 * 1000];
      float localVal_110 = data->q_prev[(i1 + -2) + (i2 + 1) * 1000];
      float localVal_112 = data->q_prev[(i1 + -2) + (i2 + -1) * 1000];
      float localVal_118 = (localVal_34 + 0.1f * ((((localVal_10 + localVal_108) + localVal_110) + localVal_112) - 4.0f * localVal_34) / 2.0f);
      float localVal_121 = data->q_prev[(i1 + -1) + (i2 + 2) * 1000];
      float localVal_128 = (localVal_36 + 0.1f * ((((localVal_12 + localVal_110) + localVal_121) + localVal_10) - 4.0f * localVal_36) / 2.0f);
      float localVal_132 = data->q_prev[(i1 + -1) + (i2 + -2) * 1000];
      float localVal_138 = (localVal_38 + 0.1f * ((((localVal_14 + localVal_112) + localVal_10) + localVal_132) - 4.0f * localVal_38) / 2.0f);
      float localVal_144 = (localVal_10 + 0.1f * ((((localVal_22 + localVal_118) + localVal_128) + localVal_138) - 4.0f * localVal_44) / 2.0f);
      float localVal_148 = data->q_prev[i1 + (i2 + 3) * 1000];
      float localVal_155 = (localVal_47 + 0.1f * ((((localVal_84 + localVal_121) + localVal_148) + localVal_12) - 4.0f * localVal_47) / 2.0f);
      float localVal_162 = (localVal_12 + 0.1f * ((((localVal_91 + localVal_128) + localVal_155) + localVal_22) - 4.0f * localVal_54) / 2.0f);
      float localVal_168 = data->q_prev[i1 + (i2 + -3) * 1000];
      float localVal_174 = (localVal_58 + 0.1f * ((((localVal_95 + localVal_132) + localVal_14) + localVal_168) - 4.0f * localVal_58) / 2.0f);
      float localVal_180 = (localVal_14 + 0.1f * ((((localVal_101 + localVal_138) + localVal_22) + localVal_174) - 4.0f * localVal_64) / 2.0f);
      float localVal_184 = 0.1f * ((((localVal_107 + localVal_144) + localVal_162) + localVal_180) - 4.0f * localVal_70);
      float localVal_188 = data->q_prev[(i1 + 3) + (i2 + 1) * 1000];
      float localVal_190 = data->q_prev[(i1 + 3) + (i2 + -1) * 1000];
      float localVal_199 = data->q_prev[(i1 + 2) + (i2 + 2) * 1000];
      float localVal_206 = (localVal_73 + 0.1f * ((((localVal_188 + localVal_25) + localVal_199) + localVal_23) - 4.0f * localVal_73) / 2.0f);
      float localVal_210 = data->q_prev[(i1 + 2) + (i2 + -2) * 1000];
      float localVal_216 = (localVal_75 + 0.1f * ((((localVal_190 + localVal_27) + localVal_23) + localVal_210) - 4.0f * localVal_75) / 2.0f);
      float localVal_226 = data->q_prev[(i1 + 1) + (i2 + 3) * 1000];
      float localVal_233 = (localVal_84 + 0.1f * ((((localVal_199 + localVal_47) + localVal_226) + localVal_25) - 4.0f * localVal_84) / 2.0f);
      float localVal_240 = (localVal_25 + 0.1f * ((((localVal_206 + localVal_54) + localVal_233) + localVal_33) - 4.0f * localVal_91) / 2.0f);
      float localVal_246 = data->q_prev[(i1 + 1) + (i2 + -3) * 1000];
      float localVal_252 = (localVal_95 + 0.1f * ((((localVal_210 + localVal_58) + localVal_27) + localVal_246) - 4.0f * localVal_95) / 2.0f);
      float localVal_258 = (localVal_27 + 0.1f * ((((localVal_216 + localVal_64) + localVal_33) + localVal_252) - 4.0f * localVal_101) / 2.0f);
      float localVal_266 = data->q_prev[(i1 + -3) + (i2 + 1) * 1000];
      float localVal_268 = data->q_prev[(i1 + -3) + (i2 + -1) * 1000];
      float localVal_277 = data->q_prev[(i1 + -2) + (i2 + 2) * 1000];
      float localVal_284 = (localVal_110 + 0.1f * ((((localVal_36 + localVal_266) + localVal_277) + localVal_34) - 4.0f * localVal_110) / 2.0f);
      float localVal_288 = data->q_prev[(i1 + -2) + (i2 + -2) * 1000];
      float localVal_294 = (localVal_112 + 0.1f * ((((localVal_38 + localVal_268) + localVal_34) + localVal_288) - 4.0f * localVal_112) / 2.0f);
      float localVal_304 = data->q_prev[(i1 + -1) + (i2 + 3) * 1000];
      float localVal_311 = (localVal_121 + 0.1f * ((((localVal_47 + localVal_277) + localVal_304) + localVal_36) - 4.0f * localVal_121) / 2.0f);
      float localVal_318 = (localVal_36 + 0.1f * ((((localVal_54 + localVal_284) + localVal_311) + localVal_44) - 4.0f * localVal_128) / 2.0f);
      float localVal_324 = data->q_prev[(i1 + -1) + (i2 + -3) * 1000];
      float localVal_330 = (localVal_132 + 0.1f * ((((localVal_58 + localVal_288) + localVal_38) + localVal_324) - 4.0f * localVal_132) / 2.0f);
      float localVal_336 = (localVal_38 + 0.1f * ((((localVal_64 + localVal_294) + localVal_44) + localVal_330) - 4.0f * localVal_138) / 2.0f);
      data->q[i1 + i2 * 1000] = (localVal_8 + (((localVal_19 / 6.0f + localVal_68 / 3.0f) + localVal_184 / 3.0f) + 0.1f * (((((localVal_9 + 0.1f * (((((localVal_23 + 0.1f * (((((localVal_71 + 0.1f * ((((data->q_prev[(i1 + 4) + i2 * 1000] + localVal_23) + localVal_188) + localVal_190) - 4.0f * localVal_71) / 2.0f) + localVal_33) + localVal_206) + localVal_216) - 4.0f * localVal_81) / 2.0f) + localVal_70) + localVal_240) + localVal_258) - 4.0f * localVal_107)) + (localVal_10 + 0.1f * ((((localVal_70 + (localVal_34 + 0.1f * ((((localVal_44 + (localVal_108 + 0.1f * ((((localVal_34 + data->q_prev[(i1 + -4) + i2 * 1000]) + localVal_266) + localVal_268) - 4.0f * localVal_108) / 2.0f)) + localVal_284) + localVal_294) - 4.0f * localVal_118) / 2.0f)) + localVal_318) + localVal_336) - 4.0f * localVal_144))) + (localVal_12 + 0.1f * ((((localVal_240 + localVal_318) + (localVal_47 + 0.1f * ((((localVal_233 + localVal_311) + (localVal_148 + 0.1f * ((((localVal_226 + localVal_304) + data->q_prev[i1 + (i2 + 4) * 1000]) + localVal_47) - 4.0f * localVal_148) / 2.0f)) + localVal_54) - 4.0f * localVal_155) / 2.0f)) + localVal_70) - 4.0f * localVal_162))) + (localVal_14 + 0.1f * ((((localVal_258 + localVal_336) + localVal_70) + (localVal_58 + 0.1f * ((((localVal_252 + localVal_330) + localVal_64) + (localVal_168 + 0.1f * ((((localVal_246 + localVal_324) + localVal_58) + data->q_prev[i1 + (i2 + -4) * 1000]) - 4.0f * localVal_168) / 2.0f)) - 4.0f * localVal_174) / 2.0f)) - 4.0f * localVal_180))) - 4.0f * (localVal_8 + localVal_184)) / 6.0f));
    }
  }
  //--body end--//--body start--
  for(int i2 = 5, b2 = 5;i2 < 1000; ++i2, ++b2) {
    for(int i1 = 995, b1 = 995;i1 < 1000; ++i1, ++b1) {
      data->q[i1 + i2 * 1000] = 0.0f;
    }
  }
  //--body end--
}







int formura_initialize(Formura0Navi* data){
  if((data->q = (float *)malloc(sizeof(float)*1000000)) == 0)
    return 0;
  if((data->q_prev = (float *)malloc(sizeof(float)*1000000)) == 0)
    return 0;

  return 1;
}

void formura_setup(Formura0Navi* data, char* dumpdata)
{
  data->time = 0;
  //--body start--
  for(int i2 = 0, b2 = 0;i2 < 1000; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 1000; ++i1, ++b1) {
      int32_t localVal_2 = 1000.0f;
      float localVal_5 = (i1 - 500.0f);
      float localVal_7 = (i2 - 500.0f);
      data->q[i1 + i2 * 1000] = ((localVal_5 * localVal_5 + localVal_7 * localVal_7) < 100.0f ? 1.0f : 0.0f);
    }
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