#!/bin/sh

echo "TGV, no TGV" > ../result/light.csv
for i in `seq 6`
do
  ./tgv.out >> ../result/light.csv
  ./notgv.out >> ../result/light.csv
  echo "" >> ../result/light.csv
done
