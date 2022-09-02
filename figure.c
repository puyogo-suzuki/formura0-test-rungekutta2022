#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

#define MAX_I1 10
#define MAX_I2 10

#define STEP 50000

typedef uint64_t formura_time_t;

typedef struct Formura0Navi
{
  formura_time_t time;
  double* q;
  double* q_prev;
  double* k12;
  double* k22;
  double* k32;

} Formura0Navi;



void formura_step(Formura0Navi* data)
{
  //--body start--
  for(int i2 = 0, b2 = 0;i2 < 10; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 10; ++i1, ++b1) {
      int32_t localVal_3 = 10.0;
      data->k12[b1 + b2 * 10] = 1.0e-3 * ((((data->q_prev[(((i1 + 1) + MAX_I1)%MAX_I1) + i2 * 10] + data->q_prev[(((i1 + -1) + MAX_I1)%MAX_I1) + i2 * 10]) + data->q_prev[i1 + (((i2 + 1) + MAX_I2)%MAX_I2) * 10]) + data->q_prev[i1 + (((i2 + -1) + MAX_I2)%MAX_I2) * 10]) - 4.0 * data->q_prev[i1 + i2 * 10]);
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 10; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 10; ++i1, ++b1) {
      int32_t localVal_3 = 10.0;
      data->k22[b1 + b2 * 10] = 1.0e-3 * (((((data->q_prev[(((i1 + 1) + MAX_I1)%MAX_I1) + i2 * 10] + data->k12[((b1 + 1 + MAX_I1)%MAX_I1) + b2 * 10] / 2.0) + (data->q_prev[(((i1 + -1) + MAX_I1)%MAX_I1) + i2 * 10] + data->k12[((b1 + -1 + MAX_I1)%MAX_I1) + b2 * 10] / 2.0)) + (data->q_prev[i1 + (((i2 + 1) + MAX_I2)%MAX_I2) * 10] + data->k12[b1 + ((b2 + 1 + MAX_I2)%MAX_I2) * 10] / 2.0)) + (data->q_prev[i1 + (((i2 + -1) + MAX_I2)%MAX_I2) * 10] + data->k12[b1 + ((b2 + -1 + MAX_I2)%MAX_I2) * 10] / 2.0)) - 4.0 * (data->q_prev[i1 + i2 * 10] + data->k12[b1 + b2 * 10] / 2.0));
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 10; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 10; ++i1, ++b1) {
      int32_t localVal_3 = 10.0;
      data->k32[b1 + b2 * 10] = 1.0e-3 * (((((data->q_prev[(((i1 + 1) + MAX_I1)%MAX_I1) + i2 * 10] + data->k22[((b1 + 1 + MAX_I1)%MAX_I1) + b2 * 10] / 2.0) + (data->q_prev[(((i1 + -1) + MAX_I1)%MAX_I1) + i2 * 10] + data->k22[((b1 + -1 + MAX_I1)%MAX_I1) + b2 * 10] / 2.0)) + (data->q_prev[i1 + (((i2 + 1) + MAX_I2)%MAX_I2) * 10] + data->k22[b1 + ((b2 + 1 + MAX_I2)%MAX_I2) * 10] / 2.0)) + (data->q_prev[i1 + (((i2 + -1) + MAX_I2)%MAX_I2) * 10] + data->k22[b1 + ((b2 + -1 + MAX_I2)%MAX_I2) * 10] / 2.0)) - 4.0 * (data->q_prev[i1 + i2 * 10] + data->k22[b1 + b2 * 10] / 2.0));
    }
  }
  //--body end--//--body start--
  for(int i2 = 0, b2 = 0;i2 < 10; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 10; ++i1, ++b1) {
      int32_t localVal_3 = 10.0;
      double localVal_8 = data->q_prev[i1 + i2 * 10];
      double localVal_66 = data->k32[b1 + b2 * 10];
      data->q[i1 + i2 * 10] = (localVal_8 + (((data->k12[b1 + b2 * 10] / 6.0 + data->k22[b1 + b2 * 10] / 3.0) + localVal_66 / 3.0) + 1.0e-3 * (((((data->q_prev[(((i1 + 1) + MAX_I1)%MAX_I1) + i2 * 10] + data->k32[((b1 + 1 + MAX_I1)%MAX_I1) + b2 * 10]) + (data->q_prev[(((i1 + -1) + MAX_I1)%MAX_I1) + i2 * 10] + data->k32[((b1 + -1 + MAX_I1)%MAX_I1) + b2 * 10])) + (data->q_prev[i1 + (((i2 + 1) + MAX_I2)%MAX_I2) * 10] + data->k32[b1 + ((b2 + 1 + MAX_I2)%MAX_I2) * 10])) + (data->q_prev[i1 + (((i2 + -1) + MAX_I2)%MAX_I2) * 10] + data->k32[b1 + ((b2 + -1 + MAX_I2)%MAX_I2) * 10])) - 4.0 * (localVal_8 + localVal_66)) / 6.0));
    }
  }
  //--body end--
}







int formura_initialize(Formura0Navi* data){
  if((data->q = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;
  if((data->q_prev = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;
  if((data->k12 = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;
  if((data->k22 = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;
  if((data->k32 = (double *)malloc(sizeof(double)*100)) == 0)
    return 0;

  return 1;
}

void formura_setup(Formura0Navi* data, char* dumpdata)
{
  data->time = 0;
  //--body start--
  for(int i2 = 0, b2 = 0;i2 < 10; ++i2, ++b2) {
    for(int i1 = 0, b1 = 0;i1 < 10; ++i1, ++b1) {
      int32_t localVal_2 = 10.0;
      double localVal_5 = (i1 - 5.0);
      double localVal_7 = (i2 - 5.0);
      data->q[i1 + i2 * 10] = ((localVal_5 * localVal_5 + localVal_7 * localVal_7) < 2.0 ? 1.0 : 0.0);
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
  printf("%lf", data.q_prev[0]);
  for(int q = 1; q < MAX_I1*MAX_I2; ++q)
    printf(",%lf", data.q_prev[q]);
  printf("\n");
  for(int i = 0; i < STEP; ++i) {
    formura_forward(&data);
    if(i % 100 != 0) continue;
    printf("%lf", data.q_prev[0]);
    for(int q = 1; q < MAX_I1*MAX_I2; ++q)
      printf(",%lf", data.q_prev[q]);
    printf("\n");
  }

  return 0;
}

