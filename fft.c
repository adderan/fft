#include <stdint.h>
#include <math.h>

typedef struct {
  int16_t re;
  int16_t im;
} Complex;

Complex *cyclic(int n) {

  Complex *c = (Complex*) sizeof(Complex);
  c->re = (int16_t)((1 << 15) * cos(n*pi));
  c->im = (int16_t)((1 << 15) * sin(n*pi));
  return c;
}

//inefficient reference implementation of radix-m fft butterfly operation -
//transforming v[n] to v[n+m]
static void fft_radix(int m, Complex *in, Complex *out, int k0, int c0) {
  const int c1 = c0 >> m;

  for (int k2 = 0; k2 < c1; k2++) {
    for (int k1 = 0; k1 < 1 << m; k1++) {
      Complex sum = {0,0};


    }
  }

}


void init_fft() {

}

void init_ifft() {

}

void fft(Complex *in, Complex *out) {
}

void ifft(Complex *in, Complex *out) {

}

int main(int argc, char **argv) {

}
