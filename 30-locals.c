#include <stdio.h>

void f(char **p){
  char s[] = "Bonjour !\n";
  *p = s;
}

int main(){
  char* p;
  f(&p);
  printf("%s\n", p);
  return 0;
}
