#!/bin/sh
g++ -O3 -march=native $1 -I ~/Workspace/f0bench/physis/include/ -L ~/Workspace/f0bench/physis/build/runtime/ -lphysis_rt_ref
