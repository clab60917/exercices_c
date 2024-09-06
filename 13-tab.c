#include <stdio.h>

int main(){
  int tab[10];
  tab[0] = 12;
  tab[1] = 8;
  for (int i = 0; i < 10; i++)
    printf("tab[%i] = %d\n", i, tab[i]);
  return 0;
}
