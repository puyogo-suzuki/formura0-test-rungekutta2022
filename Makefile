formura0files = src/formura0/100-notgv.c src/formura0/100-tgv.c src/formura0/1000000-noblocking-tgv.c src/formura0/1000000-notgv.c src/formura0/1000000-tgv.c

bench_stepfor100 = 1000000
bench_stepfor1000000 = 10000

out_stepfor100 = 1000

all: formura0bench formura0out

buildDir:
	mkdir -p build

formura0bench: $(formura0files) buildDir
	gcc -O3 -march=native -o build/formura0.bench.100-notgv.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/100-notgv.c
	gcc -O3 -march=native -o build/formura0.bench.100-gv.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/100-gv.c
	gcc -O3 -march=native -o build/formura0.bench.1000000-noblocking-tgv.out -D STEP=$(bench_stepfor1000000) -D BENCH=1 src/formura0/1000000-noblocking-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.1000000-notgv.out -D STEP=$(bench_stepfor1000000) -D BENCH=1 src/formura0/1000000-notgv.c
	gcc -O3 -march=native -o build/formura0.bench.1000000-tgv.out -D STEP=$(bench_stepfor1000000) -D BENCH=1 src/formura0/1000000-tgv.c

formura0out: src/formura0/100-notgv.c src/formura0/100-tgv.c buildDir
	gcc -O3 -march=native -o build/formura0.out.100-notgv.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/100-notgv.c
	gcc -O3 -march=native -o build/formura0.out.100-gv.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/100-gv.c
