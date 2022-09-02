STEPS=40000

all:
	gcc -O3 -march=native -o tgv.out -D STEP=$(STEPS) -D BENCH=1 tgv.c
	gcc -O3 -march=native -o notgv.out -D STEP=$(STEPS) -D BENCH=1 notgv.c
