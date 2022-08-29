#include "Halide.h"
#include <iostream>

#define TOTAL_GRID_POINTS 1000
#define dx (1.0f/TOTAL_GRID_POINTS)
#define dt (0.0001f*dx)

#define LCORNER 5
#define RCORNER (TOTAL_GRID_POINTS - LCORNER)

#define Q(x,y) q_(x,y)
//q(clamp(x, 0, TOTAL_GRID_POINTS-1), clamp(y, 0, TOTAL_GRID_POINTS-1))

#define K1(x,y) k1_(x, y)
#define K2(x,y) k2_(x, y)
#define K3(x,y) k3_(x, y)

int
main() {
  Halide::ImageParam q(Halide::type_of<float>(), 2);
  Halide::Func k1, k2, k3, step;
  Halide::Expr k4;
  Halide::Var x, y, xi, yi;
  Halide::Func q_ = Halide::BoundaryConditions::constant_exterior(q, 0, {{LCORNER, RCORNER}, {LCORNER, RCORNER}});
  k1(x,y) = dt/dx/dx*(Q(x+1,y) + Q(x-1, y) + Q(x, y+1) + Q(x, y - 1) - 4*Q(x,y));
  Halide::Func k1_ = Halide::BoundaryConditions::constant_exterior(k1, 0, {{LCORNER, RCORNER}, {LCORNER, RCORNER}});
  k2(x,y) = dt/dx/dx*((Q(x+1,y) + K1(x+1,y)/2) + (Q(x-1, y) + K1(x-1,y)/2) + (Q(x, y+1) + K1(x,y+1)/2) + (Q(x, y-1) + K1(x, y-1)/2) - 4*(Q(x,y) + K1(x, y)/2));
  Halide::Func k2_ = Halide::BoundaryConditions::constant_exterior(k2, 0, {{LCORNER, RCORNER}, {LCORNER, RCORNER}});
  k3(x,y) = dt/dx/dx*((Q(x+1,y) + K2(x+1,y)/2) + (Q(x-1, y) + K2(x-1,y)/2) + (Q(x, y+1) + K2(x,y+1)/2) + (Q(x, y-1) + K2(x, y-1)/2) - 4*(Q(x,y) + K2(x, y)/2));
  Halide::Func k3_ = Halide::BoundaryConditions::constant_exterior(k3, 0, {{LCORNER, RCORNER}, {LCORNER, RCORNER}});
  k4 = dt/dx/dx*((Q(x+1,y) + K3(x+1,y)) + (Q(x-1, y) + K3(x-1,y)) + (Q(x, y+1) + K3(x,y+1)) + (Q(x, y - 1) + K3(x, y-1)) - 4*(Q(x,y) + K3(x, y)));
  step(x,y) = q(x,y) + (K1(x,y) / 6.0f + K2(x,y) / 3.0f + K3(x,y) / 3.0f + k4 / 6.0f);
  step.vectorize(x, 8);
#if COMPROOT
  k1.compute_root();
  k2.compute_root();
  k3.compute_root();
#endif
  //step.tile(x,y,xi,yi,250,250); // Runtime Error.
#if COMPROOT  
  step.compile_to_lowered_stmt("stmt_halide1000-comproot.html", {q}, Halide::HTML);
  step.compile_to_static_library("libh1000-comproot", {q}, "step");
#else
  step.compile_to_lowered_stmt("stmt_halide1000.html", {q}, Halide::HTML);
  step.compile_to_static_library("libh1000", {q}, "step");
#endif
  return 0;
}
