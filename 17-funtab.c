#include <stdio.h>

void f (int tab[2]){
  tab[0] += 1;
}

int main(){
  int tab[2] = { 3, 8 };
  printf("tab[0] = %d\n", tab[0]);
  f(tab);
  printf("tab[0] = %d\n", tab[0]);
  return 0;
}

