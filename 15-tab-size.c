#include <stdio.h>

int main(){
  int x = 3;
  int tab[] = {0, 1, 2, 3, 4, 5};
  printf("taille du tableau = %ld\n", sizeof(tab));
  printf("nombre d'éléments du tableau = %ld\n", sizeof(tab) / sizeof(int));
  printf("taille de x = %ld\n", sizeof(x));
  return 0;
}
