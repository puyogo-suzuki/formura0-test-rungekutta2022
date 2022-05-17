#!/bin/sh

gcc -O3 -march=znver2 -o tmpmain.gccbench.out tmpmain.gccbench.c
gcc -O3 -march=znver2 -o notmpmain.gccbench.out notmpmain.gccbench.c

echo temporary, no temporary[ms] > gccbench.csv
for i in `seq 0 49`
do
  ./tmpmain.gccbench.out >> gccbench.csv
  ./notmpmain.gccbench.out >> gccbench.csv
  echo "" >> gccbench.csv
done
