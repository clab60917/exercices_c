#include <stdio.h>
int main(){
  int i = 3;
  float f = (float) i;
  float pi = -3.99999999999;
  int pi_a_peu_pres = (int) pi;
  printf("i = %d, f = %f, pi = %f, pi_a_peu_pres = %d\n", i, f, pi, pi_a_peu_pres);

  int ii = 0x12345678;
  int* p = &ii;
  char* pc = (char*) p;
  for (int j = 0; j < 4; j++){
    printf("pc[%d] = 0x%x\n", j, pc[j]);
  }
  return 0;
}
