#include <stdio.h>

void f(int x){
  while(x > 0){
    if (x * 2 == 24) return;
    printf("%d\n",x);
    x--;
  }
}

int main(){
  f(7);
  return 0;
}
