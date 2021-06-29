#include <stdio.h>
#include <stdlib.h>

void matrix_init(int* a, int dimension){
  int i;
  for(i = 0 ; i < dimension ; i++){
    a[i] = 0;
  }
  return;
}

void main(){
  int* a;
  int dimension = 512;
  a = (int*) malloc(dimension * sizeof(int));
  matrix_init(a, dimension);
  free(a);
}
