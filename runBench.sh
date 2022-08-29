#!/bin/sh

echo "formura0(no TGV), formura0(TGV), formura0(TGV-if), Halide(no compute_root), Halide(compute_root), Physis(1), Physis(2)" > result/float.100.csv
echo "formura0(no TGV), formura0(TGV), formura0(TGV-if), Physis(1), Physis(2)" > result/double.100.csv
echo "formura0(no TGV), formura0(TGV blocking no), formura0(TGV-if blocking no), formura0(TGV blocking 100*100), formura0(TGV blocking 125),formura0(TGV blocking 250), formura0(TGV blocking 500), Halide(no compute_root), Halide(compute_root), Physis(1), Physis(2)" > result/float.1000.csv
echo "formura0(no TGV), formura0(TGV blocking no), formura0(TGV-if blocking no), formura0(TGV blocking 100*100), formura0(TGV blocking 125),formura0(TGV blocking 250), formura0(TGV blocking 500), Physis(1), Physis(2)" > result/double.1000.csv
for i in `seq 6`
do
  build/formura0.bench.float.100-notgv.out >> result/float.100.csv
  build/formura0.bench.float.100-tgv.out >> result/float.100.csv
  build/formura0.bench.float.100-tgv-if.out >> result/float.100.csv
  build/halide.bench.100.out >> result/float.100.csv
  build/halide.bench.100-comproot.out >> result/float.100.csv
  build/physis.float.100.ref.out bench >> result/float.100.csv
  build/physis2.float.100.ref.out bench >> result/float.100.csv
  echo "" >> result/float.100.csv

  build/formura0.bench.double.100-notgv.out >> result/double.100.csv
  build/formura0.bench.double.100-tgv.out >> result/double.100.csv
  build/formura0.bench.double.100-tgv-if.out >> result/double.100.csv
  build/physis.double.100.ref.out bench >> result/double.100.csv
  build/physis2.double.100.ref.out bench >> result/double.100.csv
  echo "" >> result/double.100.csv

  build/formura0.bench.float.1000-notgv.out >> result/float.1000.csv
  build/formura0.bench.float.1000-noblocking-tgv.out >> result/float.1000.csv
  build/formura0.bench.float.1000-noblocking-tgv-if.out >> result/float.1000.csv
  build/formura0.bench.float.1000-blocking100-tgv.out >> result/float.1000.csv
  build/formura0.bench.float.1000-blocking125-tgv.out >> result/float.1000.csv
  build/formura0.bench.float.1000-blocking250-tgv.out >> result/float.1000.csv
  build/formura0.bench.float.1000-blocking500-tgv.out >> result/float.1000.csv
  build/halide.bench.1000.out >> result/float.1000.csv
  build/halide.bench.1000-comproot.out >> result/float.1000.csv
  build/physis.float.1000.ref.out bench >> result/float.1000.csv
  build/physis2.float.1000.ref.out bench >> result/float.1000.csv
  echo "" >> result/float.1000.csv

  build/formura0.bench.double.1000-notgv.out >> result/double.1000.csv
  build/formura0.bench.double.1000-noblocking-tgv.out >> result/double.1000.csv
  build/formura0.bench.double.1000-noblocking-tgv-if.out >> result/double.1000.csv
  build/formura0.bench.double.1000-blocking100-tgv.out >> result/double.1000.csv
  build/formura0.bench.double.1000-blocking125-tgv.out >> result/double.1000.csv
  build/formura0.bench.double.1000-blocking250-tgv.out >> result/double.1000.csv
  build/formura0.bench.double.1000-blocking500-tgv.out >> result/double.1000.csv
  build/physis.double.1000.ref.out bench >> result/double.1000.csv
  build/physis2.double.1000.ref.out bench >> result/double.1000.csv
  echo "" >> result/double.1000.csv
done
