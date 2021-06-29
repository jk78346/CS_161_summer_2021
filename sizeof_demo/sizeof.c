#include <stdio.h>

struct student{
  int id;
  double *homework;
  int participation;
  double midterm;
  double average;
};

int main(){
  printf("%lu\n", sizeof(struct student));
  return 0;
}
