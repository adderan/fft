all: tests

tests: fft.c
	gcc -o tests fft.c
