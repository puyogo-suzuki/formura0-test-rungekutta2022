#include <iostream>
#include <iomanip>
#include <Halide.h>
#if COMPROOT
#include "libh1000-comproot.h"
#else
#include "libh1000.h"
#endif
#include <time.h>
#define MAX_I1 1000
#define MAX_I2 1000
#define _STEP (STEP / 2)

int main() {
  Halide::Runtime::Buffer<float> q(MAX_I1, MAX_I2), q1(MAX_I1, MAX_I2);
  for(int i2 = 0; i2 < MAX_I2; ++i2)
    for(int i1 = 0; i1 < MAX_I1; ++i1) {
      int c1 = i1 - (MAX_I1 / 2);
      int c2 = i2 - (MAX_I2 / 2);
      q(i1, i2) = (c1 * c1 + c2 * c2) < 100 ? 1.0f : 0.0f;
    }
#if BENCH
  struct timespec start, end;
  if(clock_gettime(CLOCK_MONOTONIC, &start)) return 0;
  for(int i = 0; i < _STEP; ++i) {
    step(q, q1);
    step(q1, q);
  }
  if(clock_gettime(CLOCK_MONOTONIC, &end)) return 0;
  long long sec = end.tv_sec - start.tv_sec;
  std::cout << ((double)sec * 1000*1000*1000 + (end.tv_nsec - start.tv_nsec)) / 1000.0 / 1000.0 << ",";
#else
  std::cout << std::setprecision(6) << std::fixed;
  std::cout << q(0,0);
  for(int i = 1; i < MAX_I1*MAX_I2; ++i)
    std::cout << "," << q(i%MAX_I1, i/MAX_I2);
  std::cout << std::endl;
  for(int i = 0; i < _STEP; ++i) {
    step(q, q1);
    std::cout << q1(0,0);
    for(int i = 1; i < MAX_I1*MAX_I2; ++i)
      std::cout << "," << q1(i%MAX_I1, i/MAX_I2);
    std::cout << std::endl;
    step(q1, q);
    std::cout << q(0,0);
    for(int i = 1; i < MAX_I1*MAX_I2; ++i)
      std::cout << "," << q(i%MAX_I1, i/MAX_I2);
    std::cout << std::endl;
  }
#endif
  return 0;
}
