#include <stdio.h>

int main(){
  int tab[10] = { 12, 8, 5, 4, 3, 2, -8, 12, 7, 10 };
  for (int i = 0; i < 10; i++)
    printf("tab[%i] = %d\n", i, tab[i]);
  return 0;
}
