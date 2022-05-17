#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

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
  double* k33;
  double* k23;
  double* k13;

} Formura0Navi;



void formura_step(Formura0Navi* data)
{
  //--body start--
  for(int i1 = 1;i1 < 100; ++i1) {
    int32_t localVal_6 = 100.0;
    data->k13[i1] = (data->q_prev[(i1 + -1)] - data->q_prev[i1]) * 1.0e-3 / 1.0e-2;
  }
  //--body end--//--body start--
  {
    int i1 = 0;
    data->k13[i1] = 0.0;
  }
  //--body end--//--body start--
  for(int i1 = 1;i1 < 100; ++i1) {
    int32_t localVal_6 = 100.0;
    data->k23[i1] = ((data->q_prev[(i1 + -1)] + data->k13[(i1 + -1)] / 2.0) - (data->q_prev[i1] + data->k13[i1] / 2.0)) * 1.0e-3 / 1.0e-2;
  }
  //--body end--//--body start--
  {
    int i1 = 0;
    data->k23[i1] = 0.0;
  }
  //--body end--//--body start--
  for(int i1 = 1;i1 < 100; ++i1) {
    int32_t localVal_6 = 100.0;
    data->k33[i1] = ((data->q_prev[(i1 + -1)] + data->k23[(i1 + -1)] / 2.0) - (data->q_prev[i1] + data->k23[i1] / 2.0)) * 1.0e-3 / 1.0e-2;
  }
  //--body end--//--body start--
  {
    int i1 = 0;
    data->k33[i1] = 0.0;
  }
  //--body end--//--body start--
  for(int i1 = 1;i1 < 100; ++i1) {
    double localVal_0 = data->q_prev[i1];
    int32_t localVal_6 = 100.0;
    double localVal_33 = data->k33[i1];
    data->q[i1] = (localVal_0 + (((data->k13[i1] / 6.0 + data->k23[i1] / 3.0) + localVal_33 / 3.0) + ((data->q_prev[(i1 + -1)] + data->k33[(i1 + -1)]) - (localVal_0 + localVal_33)) * 1.0e-3 / 1.0e-2 / 6.0));
  }
  //--body end--//--body start--
  {
    int i1 = 0;
    data->q[i1] = 1.0;
  }
  //--body end--
}







int formura_initialize(Formura0Navi* data){
  if((data->q = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;
  if((data->q_prev = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;
  if((data->k33 = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;
  if((data->k23 = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;
  if((data->k13 = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;

  return 1;
}

void formura_setup(Formura0Navi* data, char* dumpdata)
{
  data->time = 0;
  //--body start--
  for(int i1 = 0;i1 < 100; ++i1) {
    data->q[i1] = (i1 > 20.0 ? 0.0 : 1.0);
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
  struct timespec start, end;
  Formura0Navi data;
  if(!formura_initialize(&data)) {
    printf("Allocation failed.\n");
    return 0;
  }
  if(clock_gettime(CLOCK_MONOTONIC, &start)) return 0;
  formura_setup(&data, NULL);
  for(int i = 0; i < 100000000; ++i) {
    formura_forward(&data);
  }
  if(clock_gettime(CLOCK_MONOTONIC, &end)) return 0;
  long long sec = end.tv_sec - start.tv_sec;
  printf("%lf,", (double)(sec * 1000*1000*1000 + (end.tv_nsec - start.tv_nsec)) / 1000.0 / 1000.0);
  return 0;
}
