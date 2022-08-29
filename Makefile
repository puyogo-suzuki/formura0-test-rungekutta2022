formura0floatfile = src/formura0/float/100-notgv.c src/formura0/float/100-tgv.c src/formura0/float/100-tgv-if.c src/formura0/float/1000-noblocking-tgv.c src/formura0/float/1000-noblocking-tgv-if.c src/formura0/float/1000-notgv.c src/formura0/float/1000-blocking100-tgv.c src/formura0/float/1000-blocking125-tgv.c src/formura0/float/1000-blocking250-tgv.c src/formura0/float/1000-blocking500-tgv.c
formura0doublefile = src/formura0/double/100-notgv.c src/formura0/double/100-tgv.c src/formura0/double/100-tgv-if.c src/formura0/double/1000-noblocking-tgv.c src/formura0/double/1000-noblocking-tgv-if.c src/formura0/double/1000-notgv.c src/formura0/double/1000-blocking100-tgv.c src/formura0/double/1000-blocking125-tgv.c src/formura0/double/1000-blocking250-tgv.c src/formura0/double/1000-blocking500-tgv.c
physisfloatfile = src/physis/physis.float.100.ref.c src/physis/physis.float.1000.ref.c src/physis/physis2.float.100.ref.c src/physis/physis2.float.1000.ref.c
physisdoublefile = src/physis/physis.double.100.ref.c src/physis/physis.double.1000.ref.c src/physis/physis2.double.100.ref.c src/physis/physis2.double.1000.ref.c
halidefiles = src/halide/halide100.cpp src/halide/halide100.gen.cpp src/halide/halide1000.cpp src/halide/halide1000.gen.cpp
halideout = build/halide.out.100.out build/halide.bench.100.out build/halide.out.100-comproot.out build/halide.bench.100-comproot.out build/halide.out.1000.out build/halide.bench.1000.out build/halide.out.1000-comproot.out build/halide.bench.1000-comproot.out

bench_stepfor100 = 1000000
bench_stepfor1000 = 10000

out_stepfor100 = 1000
out_stepfor1000 = 10

halideDir = ~/Workspace/f0bench/Halide
physisRuntimeDir = ~/Workspace/f0bench/physis/build/runtime/
physisIncludeDir = ~/Workspace/f0bench/physis/include/
physisRuntimeName = physis_rt_ref


buildDir:
	mkdir -p build

formura0float: $(formura0floatfile)
	gcc -O3 -march=native -o build/formura0.bench.float.100-notgv.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/float/100-notgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.100-tgv.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/float/100-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.100-tgv-if.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/float/100-tgv-if.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-noblocking-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-noblocking-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-noblocking-tgv-if.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-noblocking-tgv-if.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-notgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-notgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-blocking100-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-blocking100-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-blocking125-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-blocking125-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-blocking250-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-blocking250-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.float.1000-blocking500-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/float/1000-blocking500-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.100-notgv.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/float/100-notgv.c
	gcc -O3 -march=native -o build/formura0.out.float.100-tgv.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/float/100-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.100-tgv-if.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/float/100-tgv-if.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-noblocking-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-noblocking-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-noblocking-tgv-if.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-noblocking-tgv-if.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-notgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-notgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-blocking100-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-blocking100-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-blocking125-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-blocking125-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-blocking250-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-blocking250-tgv.c
	gcc -O3 -march=native -o build/formura0.out.float.1000-blocking500-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/float/1000-blocking500-tgv.c

formura0double: $(formura0doublefile)
	gcc -O3 -march=native -o build/formura0.bench.double.100-notgv.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/double/100-notgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.100-tgv.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/double/100-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.100-tgv-if.out -D STEP=$(bench_stepfor100) -D BENCH=1 src/formura0/double/100-tgv-if.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-noblocking-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-noblocking-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-noblocking-tgv-if.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-noblocking-tgv-if.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-notgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-notgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-blocking100-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-blocking100-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-blocking125-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-blocking125-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-blocking250-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-blocking250-tgv.c
	gcc -O3 -march=native -o build/formura0.bench.double.1000-blocking500-tgv.out -D STEP=$(bench_stepfor1000) -D BENCH=1 src/formura0/double/1000-blocking500-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.100-notgv.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/double/100-notgv.c
	gcc -O3 -march=native -o build/formura0.out.double.100-tgv.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/double/100-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.100-tgv-if.out -D STEP=$(out_stepfor100) -D BENCH=0 src/formura0/double/100-tgv-if.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-noblocking-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-noblocking-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-noblocking-tgv-if.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-noblocking-tgv-if.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-notgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-notgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-blocking100-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-blocking100-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-blocking125-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-blocking125-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-blocking250-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-blocking250-tgv.c
	gcc -O3 -march=native -o build/formura0.out.double.1000-blocking500-tgv.out -D STEP=$(out_stepfor1000) -D BENCH=0 src/formura0/double/1000-blocking500-tgv.c

halide: $(halidefiles)
	g++ src/halide/halide100.gen.cpp -g -I $(halideDir)/include/ -L $(halideDir)/lib/ -lHalide -std=c++17 -o build/halide100.gen.out
	cd build && LD_LIBRARY_PATH=$(halideDir)/lib ./halide100.gen.out
	g++ -O3 -march=native -D STEP=$(out_stepfor100) -D BENCH=0 src/halide/halide100.cpp -I $(halideDir)/include -I build -L $(halideDir)/lib -L build -lHalide -lh100 -ldl -lpthread -std=c++17 -o build/halide.out.100.out
	g++ -O3 -march=native -D STEP=$(bench_stepfor100) -D BENCH=1 src/halide/halide100.cpp -I $(halideDir)/include -I build -L $(halideDir)/lib -L build -lHalide -lh100 -ldl -lpthread -std=c++17 -o build/halide.bench.100.out
	g++ src/halide/halide1000.gen.cpp -g -I $(halideDir)/include/ -L $(halideDir)/lib/ -lHalide -std=c++17 -o build/halide1000.gen.out
	cd build && LD_LIBRARY_PATH=$(halideDir)/lib ./halide1000.gen.out
	g++ -O3 -march=native -D STEP=$(out_stepfor1000) -D BENCH=0 src/halide/halide1000.cpp -I $(halideDir)/include -I build -L $(halideDir)/lib -L build -lHalide -lh1000 -ldl -lpthread -std=c++17 -o build/halide.out.1000.out
	g++ -O3 -march=native -D STEP=$(bench_stepfor1000) -D BENCH=1 src/halide/halide1000.cpp -I $(halideDir)/include -I build -L $(halideDir)/lib -L build -lHalide -lh1000 -ldl -lpthread -std=c++17 -o build/halide.bench.1000.out
	g++ src/halide/halide100.gen.cpp -g -I $(halideDir)/include/ -L $(halideDir)/lib/ -lHalide -std=c++17 -o build/halide100.gen-comproot.out -D COMPROOT=1
	cd build && LD_LIBRARY_PATH=$(halideDir)/lib ./halide100.gen-comproot.out
	g++ -O3 -march=native -D COMPROOT=1 -D STEP=$(out_stepfor100) -D BENCH=0 src/halide/halide100.cpp -I $(halideDir)/include -I build -L $(halideDir)/lib -L build -lHalide -lh100-comproot -ldl -lpthread -std=c++17 -o build/halide.out.100-comproot.out
	g++ -O3 -march=native -D COMPROOT=1 -D STEP=$(bench_stepfor100) -D BENCH=1 src/halide/halide100.cpp -I $(halideDir)/include -I build -L $(halideDir)/lib -L build -lHalide -lh100-comproot -ldl -lpthread -std=c++17 -o build/halide.bench.100-comproot.out
	g++ src/halide/halide1000.gen.cpp -g -I $(halideDir)/include/ -L $(halideDir)/lib/ -lHalide -std=c++17 -o build/halide1000.gen-comproot.out -D COMPROOT=1
	cd build && LD_LIBRARY_PATH=$(halideDir)/lib ./halide1000.gen-comproot.out
	g++ -O3 -march=native -D COMPROOT=1 -D STEP=$(out_stepfor1000) -D BENCH=0 src/halide/halide1000.cpp -I $(halideDir)/include -I build -L $(halideDir)/lib -L build -lHalide -lh1000-comproot -ldl -lpthread -std=c++17 -o build/halide.out.1000-comproot.out
	g++ -O3 -march=native -D COMPROOT=1 -D STEP=$(bench_stepfor1000) -D BENCH=1 src/halide/halide1000.cpp -I $(halideDir)/include -I build -L $(halideDir)/lib -L build -lHalide -lh1000-comproot -ldl -lpthread -std=c++17 -o build/halide.bench.1000-comproot.out

runhalide100out:
	LD_LIBRARY_PATH=$(halideDir)/lib build/halide.out.100.out

runhalide100bench:
	LD_LIBRARY_PATH=$(halideDir)/lib build/halide.bench.100.out

runhalide1000out:
	LD_LIBRARY_PATH=$(halideDir)/lib build/halide.out.1000.out

runhalide1000bench:
	LD_LIBRARY_PATH=$(halideDir)/lib build/halide.bench.1000.out

physisfloat:
	g++ -O3 -march=native -I $(physisIncludeDir) -L $(physisRuntimeDir) src/physis/physis.float.100.ref.c -l$(physisRuntimeName) -o build/physis.float.100.ref.out
	g++ -O3 -march=native -I $(physisIncludeDir) -L $(physisRuntimeDir) src/physis/physis.float.1000.ref.c -l$(physisRuntimeName) -o build/physis.float.1000.ref.out
	g++ -O3 -march=native -I $(physisIncludeDir) -L $(physisRuntimeDir) src/physis/physis2.float.100.ref.c -l$(physisRuntimeName) -o build/physis2.float.100.ref.out
	g++ -O3 -march=native -I $(physisIncludeDir) -L $(physisRuntimeDir) src/physis/physis2.float.1000.ref.c -l$(physisRuntimeName) -o build/physis2.float.1000.ref.out

physisdouble:
	g++ -O3 -march=native -I $(physisIncludeDir) -L $(physisRuntimeDir) src/physis/physis.double.100.ref.c -l$(physisRuntimeName) -o build/physis.double.100.ref.out
	g++ -O3 -march=native -I $(physisIncludeDir) -L $(physisRuntimeDir) src/physis/physis.double.1000.ref.c -l$(physisRuntimeName) -o build/physis.double.1000.ref.out
	g++ -O3 -march=native -I $(physisIncludeDir) -L $(physisRuntimeDir) src/physis/physis2.double.100.ref.c -l$(physisRuntimeName) -o build/physis2.double.100.ref.out
	g++ -O3 -march=native -I $(physisIncludeDir) -L $(physisRuntimeDir) src/physis/physis2.double.1000.ref.c -l$(physisRuntimeName) -o build/physis2.double.1000.ref.out


all : halide formura0double formura0float physisfloat physisdouble

clean:
	rm -r build/*
