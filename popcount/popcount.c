#include <smmintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

void main(){
  srand(time(NULL));
  uint64_t x = rand();
  inline int popcount(uint64_t x){
    int c = _mm_popcnt_u64(x);
    return c;
  }
  printf("x: %ld, popcount: %d\n", x, popcount(x));
}
