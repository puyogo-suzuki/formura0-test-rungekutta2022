#!/bin/sh


cc -O3 -march=znver2 -o tmpmain.out tmpmain.c
cc -O3 -march=znver2 -o notmpmain.out notmpmain.c

./tmpmain.out > tmpmain2.csv
./notmpmain.out > notmpmain2.csv
