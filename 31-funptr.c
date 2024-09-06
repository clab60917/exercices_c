#include <stdio.h>
int g(int x, int y){
  return x * y + 2;
}
int applique_fonction(int (*f)(int,int), int x){
  return f(x, x);
}
int main(){
  int res = applique_fonction(g, 4);
  printf("%d\n", res);
  return 0;
}
