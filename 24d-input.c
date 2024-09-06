#include <stdio.h>

int input_number(){
  char buf[20];
  int num;
  while(1){
    if (fgets(buf, sizeof(buf), stdin) != NULL){
      if(sscanf(buf, "%d", &num) < 1)
        printf("Je n'ai pas compris...\n");
      else
        break;
    } else {
      printf("fgets error\n");
    }
  }
  return num;
}

int main(){
  int x = input_number();
  printf ("Vous avez entré le nombre %d.\n", x);
  return 0;
}
