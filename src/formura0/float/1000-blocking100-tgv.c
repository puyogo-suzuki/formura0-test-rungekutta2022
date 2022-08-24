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
  float* k16;
  float* k26;
  float* k36;

} Formura0Navi;



void formura_step(Formura0Navi* data)
{
  //--body start--
  for(int t2 = 0; t2 < 1000; t2 += 100) {
    for(int t1 = 0; t1 < 1000; t1 += 100) {
      //--body start--
      for(int i2 = MAX(t2-3, 0), i2max = MAX(t2, 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-3, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 100 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 0), i2max = MIN(995, t2 + 100 + 3), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-3, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 100 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-3, 995), i2max = MAX(t2, 995), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-3, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(995, t1 + 100 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 995), i2max = MIN(1000, t2 + 100 + 3), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-3, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(995, t1 + 100 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-3, 0), i2max = MAX(t2, 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-3, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(1000, t1 + 100 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 0), i2max = MIN(5, t2 + 100 + 3), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-3, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(1000, t1 + 100 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-3, 5), i2max = MAX(t2, 5), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-3, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.1f * ((((data->q_prev[(i1 + 1) + i2 * 1000] + data->q_prev[(i1 + -1) + i2 * 1000]) + data->q_prev[i1 + (i2 + 1) * 1000]) + data->q_prev[i1 + (i2 + -1) * 1000]) - 4.0f * data->q_prev[i1 + i2 * 1000]);
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(995, t1 + 100 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.1f * ((((data->q_prev[(i1 + 1) + i2 * 1000] + data->q_prev[(i1 + -1) + i2 * 1000]) + data->q_prev[i1 + (i2 + 1) * 1000]) + data->q_prev[i1 + (i2 + -1) * 1000]) - 4.0f * data->q_prev[i1 + i2 * 1000]);
        }
      }
      for(int i2 = MAX(t2, 5), i2max = MIN(995, t2 + 100 + 3), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-3, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.1f * ((((data->q_prev[(i1 + 1) + i2 * 1000] + data->q_prev[(i1 + -1) + i2 * 1000]) + data->q_prev[i1 + (i2 + 1) * 1000]) + data->q_prev[i1 + (i2 + -1) * 1000]) - 4.0f * data->q_prev[i1 + i2 * 1000]);
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(995, t1 + 100 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.1f * ((((data->q_prev[(i1 + 1) + i2 * 1000] + data->q_prev[(i1 + -1) + i2 * 1000]) + data->q_prev[i1 + (i2 + 1) * 1000]) + data->q_prev[i1 + (i2 + -1) * 1000]) - 4.0f * data->q_prev[i1 + i2 * 1000]);
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-3, 5), i2max = MAX(t2, 5), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-3, 995), i1max = MAX(t1, 995), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
        for(int i1 = MAX(t1, 995), i1max = MIN(1000, t1 + 100 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 5), i2max = MIN(1000, t2 + 100 + 3), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-3, 995), i1max = MAX(t1, 995), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
        for(int i1 = MAX(t1, 995), i1max = MIN(1000, t1 + 100 + 3), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k16[(b1 + 3) + (b2 + 3) * 106] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-2, 0), i2max = MAX(t2, 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-2, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 100 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 0), i2max = MIN(995, t2 + 100 + 2), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-2, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 100 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-2, 995), i2max = MAX(t2, 995), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-2, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(995, t1 + 100 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 995), i2max = MIN(1000, t2 + 100 + 2), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-2, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(995, t1 + 100 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-2, 0), i2max = MAX(t2, 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-2, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(1000, t1 + 100 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 0), i2max = MIN(5, t2 + 100 + 2), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-2, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(1000, t1 + 100 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-2, 5), i2max = MAX(t2, 5), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-2, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k16[(b1 + 1 + 3) + (b2 + 3) * 106] / 2.0f) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k16[(b1 + -1 + 3) + (b2 + 3) * 106] / 2.0f)) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k16[(b1 + 3) + (b2 + 1 + 3) * 106] / 2.0f)) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k16[(b1 + 3) + (b2 + -1 + 3) * 106] / 2.0f)) - 4.0f * (data->q_prev[i1 + i2 * 1000] + data->k16[(b1 + 3) + (b2 + 3) * 106] / 2.0f));
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(995, t1 + 100 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k16[(b1 + 1 + 3) + (b2 + 3) * 106] / 2.0f) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k16[(b1 + -1 + 3) + (b2 + 3) * 106] / 2.0f)) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k16[(b1 + 3) + (b2 + 1 + 3) * 106] / 2.0f)) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k16[(b1 + 3) + (b2 + -1 + 3) * 106] / 2.0f)) - 4.0f * (data->q_prev[i1 + i2 * 1000] + data->k16[(b1 + 3) + (b2 + 3) * 106] / 2.0f));
        }
      }
      for(int i2 = MAX(t2, 5), i2max = MIN(995, t2 + 100 + 2), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-2, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k16[(b1 + 1 + 3) + (b2 + 3) * 106] / 2.0f) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k16[(b1 + -1 + 3) + (b2 + 3) * 106] / 2.0f)) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k16[(b1 + 3) + (b2 + 1 + 3) * 106] / 2.0f)) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k16[(b1 + 3) + (b2 + -1 + 3) * 106] / 2.0f)) - 4.0f * (data->q_prev[i1 + i2 * 1000] + data->k16[(b1 + 3) + (b2 + 3) * 106] / 2.0f));
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(995, t1 + 100 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k16[(b1 + 1 + 3) + (b2 + 3) * 106] / 2.0f) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k16[(b1 + -1 + 3) + (b2 + 3) * 106] / 2.0f)) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k16[(b1 + 3) + (b2 + 1 + 3) * 106] / 2.0f)) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k16[(b1 + 3) + (b2 + -1 + 3) * 106] / 2.0f)) - 4.0f * (data->q_prev[i1 + i2 * 1000] + data->k16[(b1 + 3) + (b2 + 3) * 106] / 2.0f));
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-2, 5), i2max = MAX(t2, 5), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-2, 995), i1max = MAX(t1, 995), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
        for(int i1 = MAX(t1, 995), i1max = MIN(1000, t1 + 100 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 5), i2max = MIN(1000, t2 + 100 + 2), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-2, 995), i1max = MAX(t1, 995), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
        for(int i1 = MAX(t1, 995), i1max = MIN(1000, t1 + 100 + 2), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k26[(b1 + 2) + (b2 + 2) * 104] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-1, 0), i2max = MAX(t2, 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-1, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 100 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 0), i2max = MIN(995, t2 + 100 + 1), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-1, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 100 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-1, 995), i2max = MAX(t2, 995), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-1, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(995, t1 + 100 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 995), i2max = MIN(1000, t2 + 100 + 1), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-1, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(995, t1 + 100 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-1, 0), i2max = MAX(t2, 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-1, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(1000, t1 + 100 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 0), i2max = MIN(5, t2 + 100 + 1), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-1, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(1000, t1 + 100 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-1, 5), i2max = MAX(t2, 5), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-1, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k26[(b1 + 1 + 2) + (b2 + 2) * 104] / 2.0f) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k26[(b1 + -1 + 2) + (b2 + 2) * 104] / 2.0f)) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k26[(b1 + 2) + (b2 + 1 + 2) * 104] / 2.0f)) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k26[(b1 + 2) + (b2 + -1 + 2) * 104] / 2.0f)) - 4.0f * (data->q_prev[i1 + i2 * 1000] + data->k26[(b1 + 2) + (b2 + 2) * 104] / 2.0f));
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(995, t1 + 100 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k26[(b1 + 1 + 2) + (b2 + 2) * 104] / 2.0f) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k26[(b1 + -1 + 2) + (b2 + 2) * 104] / 2.0f)) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k26[(b1 + 2) + (b2 + 1 + 2) * 104] / 2.0f)) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k26[(b1 + 2) + (b2 + -1 + 2) * 104] / 2.0f)) - 4.0f * (data->q_prev[i1 + i2 * 1000] + data->k26[(b1 + 2) + (b2 + 2) * 104] / 2.0f));
        }
      }
      for(int i2 = MAX(t2, 5), i2max = MIN(995, t2 + 100 + 1), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-1, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k26[(b1 + 1 + 2) + (b2 + 2) * 104] / 2.0f) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k26[(b1 + -1 + 2) + (b2 + 2) * 104] / 2.0f)) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k26[(b1 + 2) + (b2 + 1 + 2) * 104] / 2.0f)) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k26[(b1 + 2) + (b2 + -1 + 2) * 104] / 2.0f)) - 4.0f * (data->q_prev[i1 + i2 * 1000] + data->k26[(b1 + 2) + (b2 + 2) * 104] / 2.0f));
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(995, t1 + 100 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k26[(b1 + 1 + 2) + (b2 + 2) * 104] / 2.0f) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k26[(b1 + -1 + 2) + (b2 + 2) * 104] / 2.0f)) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k26[(b1 + 2) + (b2 + 1 + 2) * 104] / 2.0f)) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k26[(b1 + 2) + (b2 + -1 + 2) * 104] / 2.0f)) - 4.0f * (data->q_prev[i1 + i2 * 1000] + data->k26[(b1 + 2) + (b2 + 2) * 104] / 2.0f));
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-1, 5), i2max = MAX(t2, 5), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-1, 995), i1max = MAX(t1, 995), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
        for(int i1 = MAX(t1, 995), i1max = MIN(1000, t1 + 100 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 5), i2max = MIN(1000, t2 + 100 + 1), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-1, 995), i1max = MAX(t1, 995), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
        for(int i1 = MAX(t1, 995), i1max = MIN(1000, t1 + 100 + 1), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->k36[(b1 + 1) + (b2 + 1) * 102] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-0, 0), i2max = MAX(t2, 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 0), i2max = MIN(995, t2 + 100 + 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(5, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-0, 995), i2max = MAX(t2, 995), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(995, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 995), i2max = MIN(1000, t2 + 100 + 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(995, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-0, 0), i2max = MAX(t2, 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(1000, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 0), i2max = MIN(5, t2 + 100 + 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(1000, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-0, 5), i2max = MAX(t2, 5), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          float localVal_8 = data->q_prev[i1 + i2 * 1000];
          float localVal_66 = data->k36[(b1 + 1) + (b2 + 1) * 102];
          data->q[i1 + i2 * 1000] = (localVal_8 + (((data->k16[(b1 + 3) + (b2 + 3) * 106] / 6.0f + data->k26[(b1 + 2) + (b2 + 2) * 104] / 3.0f) + localVal_66 / 3.0f) + 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k36[(b1 + 1 + 1) + (b2 + 1) * 102]) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k36[(b1 + -1 + 1) + (b2 + 1) * 102])) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k36[(b1 + 1) + (b2 + 1 + 1) * 102])) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k36[(b1 + 1) + (b2 + -1 + 1) * 102])) - 4.0f * (localVal_8 + localVal_66)) / 6.0f));
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(995, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          float localVal_8 = data->q_prev[i1 + i2 * 1000];
          float localVal_66 = data->k36[(b1 + 1) + (b2 + 1) * 102];
          data->q[i1 + i2 * 1000] = (localVal_8 + (((data->k16[(b1 + 3) + (b2 + 3) * 106] / 6.0f + data->k26[(b1 + 2) + (b2 + 2) * 104] / 3.0f) + localVal_66 / 3.0f) + 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k36[(b1 + 1 + 1) + (b2 + 1) * 102]) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k36[(b1 + -1 + 1) + (b2 + 1) * 102])) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k36[(b1 + 1) + (b2 + 1 + 1) * 102])) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k36[(b1 + 1) + (b2 + -1 + 1) * 102])) - 4.0f * (localVal_8 + localVal_66)) / 6.0f));
        }
      }
      for(int i2 = MAX(t2, 5), i2max = MIN(995, t2 + 100 + 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 5), i1max = MAX(t1, 5), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          float localVal_8 = data->q_prev[i1 + i2 * 1000];
          float localVal_66 = data->k36[(b1 + 1) + (b2 + 1) * 102];
          data->q[i1 + i2 * 1000] = (localVal_8 + (((data->k16[(b1 + 3) + (b2 + 3) * 106] / 6.0f + data->k26[(b1 + 2) + (b2 + 2) * 104] / 3.0f) + localVal_66 / 3.0f) + 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k36[(b1 + 1 + 1) + (b2 + 1) * 102]) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k36[(b1 + -1 + 1) + (b2 + 1) * 102])) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k36[(b1 + 1) + (b2 + 1 + 1) * 102])) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k36[(b1 + 1) + (b2 + -1 + 1) * 102])) - 4.0f * (localVal_8 + localVal_66)) / 6.0f));
        }
        for(int i1 = MAX(t1, 5), i1max = MIN(995, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_3 = 1000.0f;
          float localVal_8 = data->q_prev[i1 + i2 * 1000];
          float localVal_66 = data->k36[(b1 + 1) + (b2 + 1) * 102];
          data->q[i1 + i2 * 1000] = (localVal_8 + (((data->k16[(b1 + 3) + (b2 + 3) * 106] / 6.0f + data->k26[(b1 + 2) + (b2 + 2) * 104] / 3.0f) + localVal_66 / 3.0f) + 0.1f * (((((data->q_prev[(i1 + 1) + i2 * 1000] + data->k36[(b1 + 1 + 1) + (b2 + 1) * 102]) + (data->q_prev[(i1 + -1) + i2 * 1000] + data->k36[(b1 + -1 + 1) + (b2 + 1) * 102])) + (data->q_prev[i1 + (i2 + 1) * 1000] + data->k36[(b1 + 1) + (b2 + 1 + 1) * 102])) + (data->q_prev[i1 + (i2 + -1) * 1000] + data->k36[(b1 + 1) + (b2 + -1 + 1) * 102])) - 4.0f * (localVal_8 + localVal_66)) / 6.0f));
        }
      }
      //--body end--//--body start--
      for(int i2 = MAX(t2-0, 5), i2max = MAX(t2, 5), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 995), i1max = MAX(t1, 995), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
        for(int i1 = MAX(t1, 995), i1max = MIN(1000, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
      }
      for(int i2 = MAX(t2, 5), i2max = MIN(1000, t2 + 100 + 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 995), i1max = MAX(t1, 995), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
        for(int i1 = MAX(t1, 995), i1max = MIN(1000, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          data->q[i1 + i2 * 1000] = 0.0f;
        }
      }
      //--body end--
    }
  }
  //--body end--
}







int formura_initialize(Formura0Navi* data){
  if((data->k16 = (float *)malloc(sizeof(float)*11236)) == 0)
    return 0;
  if((data->q = (float *)malloc(sizeof(float)*1000000)) == 0)
    return 0;
  if((data->q_prev = (float *)malloc(sizeof(float)*1000000)) == 0)
    return 0;
  if((data->k26 = (float *)malloc(sizeof(float)*10816)) == 0)
    return 0;
  if((data->k36 = (float *)malloc(sizeof(float)*10404)) == 0)
    return 0;

  return 1;
}

void formura_setup(Formura0Navi* data, char* dumpdata)
{
  data->time = 0;
  //--body start--
  for(int t2 = 0; t2 < 1000; t2 += 100) {
    for(int t1 = 0; t1 < 1000; t1 += 100) {
      //--body start--
      for(int i2 = MAX(t2-0, 0), i2max = MAX(t2, 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_2 = 1000.0f;
          float localVal_5 = (i1 - 500.0f);
          float localVal_7 = (i2 - 500.0f);
          data->q[i1 + i2 * 1000] = ((localVal_5 * localVal_5 + localVal_7 * localVal_7) < 100.0f ? 1.0f : 0.0f);
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(1000, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_2 = 1000.0f;
          float localVal_5 = (i1 - 500.0f);
          float localVal_7 = (i2 - 500.0f);
          data->q[i1 + i2 * 1000] = ((localVal_5 * localVal_5 + localVal_7 * localVal_7) < 100.0f ? 1.0f : 0.0f);
        }
      }
      for(int i2 = MAX(t2, 0), i2max = MIN(1000, t2 + 100 + 0), b2 = i2 - t2; i2 < i2max; ++i2, ++b2) {
        for(int i1 = MAX(t1-0, 0), i1max = MAX(t1, 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_2 = 1000.0f;
          float localVal_5 = (i1 - 500.0f);
          float localVal_7 = (i2 - 500.0f);
          data->q[i1 + i2 * 1000] = ((localVal_5 * localVal_5 + localVal_7 * localVal_7) < 100.0f ? 1.0f : 0.0f);
        }
        for(int i1 = MAX(t1, 0), i1max = MIN(1000, t1 + 100 + 0), b1 = i1 - t1; i1 < i1max; ++i1, ++b1) {
          int32_t localVal_2 = 1000.0f;
          float localVal_5 = (i1 - 500.0f);
          float localVal_7 = (i2 - 500.0f);
          data->q[i1 + i2 * 1000] = ((localVal_5 * localVal_5 + localVal_7 * localVal_7) < 100.0f ? 1.0f : 0.0f);
        }
      }
      //--body end--
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
