#include <stdio.h>

int main(){
  int x = 8;
  int * p = &x;
  int ** p2 = &p;
  **p2 = 3;
  printf("%p\n", *p2);
  return 0;
}
