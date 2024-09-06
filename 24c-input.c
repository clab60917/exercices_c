#include <stdio.h>

int main(){
  int x = 3;
  while(1){
    int res = scanf("%d", &x);
    if (res == 1)
      break;
    else {
      printf("Entrez un *nombre* s'il vous plait: \n");
    }
  }
  printf ("Vous avez entré le nombre %d.\n", x);
  return 0;
}
