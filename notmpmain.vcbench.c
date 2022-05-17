#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma comment(lib, "winmm.lib")

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


} Formura0Navi;



void formura_step(Formura0Navi* data)
{
  //--body start--
  for(int i1 = 4;i1 < 1000000; ++i1) {
    double localVal_0 = data->q_prev[i1];
    double localVal_1 = data->q_prev[(i1 + -1)];
    int32_t localVal_6 = 1000000.0;
    double localVal_10 = (localVal_1 - localVal_0) * 1.0e-7 / 1.0e-6;
    double localVal_14 = data->q_prev[(i1 + -2)];
    double localVal_19 = (localVal_1 + (localVal_14 - localVal_1) * 1.0e-7 / 1.0e-6 / 2.0);
    double localVal_22 = (localVal_19 - (localVal_0 + localVal_10 / 2.0)) * 1.0e-7 / 1.0e-6;
    double localVal_25 = data->q_prev[(i1 + -3)];
    double localVal_30 = (localVal_14 + (localVal_25 - localVal_14) * 1.0e-7 / 1.0e-6 / 2.0);
    double localVal_35 = (localVal_1 + (localVal_30 - localVal_19) * 1.0e-7 / 1.0e-6 / 2.0);
    double localVal_38 = (localVal_35 - (localVal_0 + localVal_22 / 2.0)) * 1.0e-7 / 1.0e-6;
    data->q[i1] = (localVal_0 + (((localVal_10 / 6.0 + localVal_22 / 3.0) + localVal_38 / 3.0) + ((localVal_1 + ((localVal_14 + ((localVal_25 + (data->q_prev[(i1 + -4)] - localVal_25) * 1.0e-7 / 1.0e-6 / 2.0) - localVal_30) * 1.0e-7 / 1.0e-6 / 2.0) - localVal_35) * 1.0e-7 / 1.0e-6) - (localVal_0 + localVal_38)) * 1.0e-7 / 1.0e-6 / 6.0));
  }
  //--body end--//--body start--
  for(int i1 = 0;i1 < 4; ++i1) {
    data->q[i1] = 1.0;
  }
  //--body end--
}







int formura_initialize(Formura0Navi* data){
  if((data->q = (double *)malloc(sizeof(double)*1000000)) == 0)
    return 0;
  if((data->q_prev = (double *)malloc(sizeof(double)*1000000)) == 0)
    return 0;

  return 1;
}

void formura_setup(Formura0Navi* data, char* dumpdata)
{
  data->time = 0;
  //--body start--
  for(int i1 = 0;i1 < 1000000; ++i1) {
    data->q[i1] = (i1 > 500.0 ? 0.0 : 1.0);
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
  LARGE_INTEGER start, freq, end;
  if(!QueryPerformanceFrequency(&freq)) return 0;
  if(!formura_initialize(&data)) {
    printf("Allocation failed.\n");
    return 0;
  }  if(!QueryPerformanceCounter(&start)) return 0;

  formura_setup(&data, NULL);
  for(int i = 0; i < 10000; ++i) {
    formura_forward(&data);
  }
  if(!QueryPerformanceCounter(&end)) return 0;
  printf("%lf,", (double)(end.QuadPart - start.QuadPart) * 1000 / freq.QuadPart);
  return 0;
}
