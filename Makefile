formura0floatfiles = src/formura0/float/100-notgv.c src/formura0/float/100-tgv.c src/formura0/float/1000-noblocking-tgv.c src/formura0/float/1000-notgv.c src/formura0/float/1000-blocking100-tgv.c src/formura0/float/1000-blocking125-tgv.c src/formura0/float/1000-blocking250-tgv.c src/formura0/float/1000-blocking500-tgv.c
formura0doublefile = src/formura0/double/100-notgv.c src/formura0/double/100-tgv.c src/formura0/double/1000-noblocking-tgv.c src/formura0/double/1000-notgv.c src/formura0/double/1000-blocking100-tgv.c src/formura0/double/1000-blocking125-tgv.c src/formura0/double/1000-blocking250-tgv.c src/formura0/double/1000-blocking500-tgv.c

bench_stepfor100 = 1000000
bench_stepfor1000 = 10000

out_stepfor100 = 1000
out_stepfor1000 = 10

all: formura0floatbench formura0floatout formura0doublebench formura0doubleout
clean:
	rm -r build/*

buildDir:
	mkdir -p build

formura0floatbench: $(formura0floatfiles) buildDir
	gcc -O3 -march=native -o build/formura0.bench.float.100-notgv.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/float/100-notgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.100-tgv.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/float/100-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-noblocking-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-noblocking-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-notgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-notgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-blocking100-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-blocking100-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-blocking125-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-blocking125-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-blocking250-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-blocking250-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-blocking500-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-blocking500-tgv.c

formura0doublebench:
	gcc -O3 -march=native -o build/formura0.bench.double.100-notgv.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/double/100-notgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.100-tgv.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/double/100-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-noblocking-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-noblocking-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-notgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-notgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-blocking100-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-blocking100-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-blocking125-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-blocking125-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-blocking250-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-blocking250-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-blocking500-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-blocking500-tgv.c

formura0floatout: $(formura0floatfiles) buildDir
	gcc -O3 -march=native -o build/formura0.out.float.100-notgv.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/float/100-notgv.c
	gcc -O3 -march=native -o build/formura0.out.float.100-tgv.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/float/100-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-noblocking-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-noblocking-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-notgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-notgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-blocking100-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-blocking100-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-blocking125-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-blocking125-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-blocking250-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-blocking250-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-blocking500-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-blocking500-tgv.c

formura0doubleout: $(formura0floatfiles) buildDir
	gcc -O3 -march=native -o build/formura0.out.double.100-notgv.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/double/100-notgv.c
	gcc -O3 -march=native -o build/formura0.out.double.100-tgv.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/double/100-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-noblocking-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-noblocking-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-notgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-notgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-blocking100-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-blocking100-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-blocking125-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-blocking125-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-blocking250-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-blocking250-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-blocking500-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-blocking500-tgv.c
