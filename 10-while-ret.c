#include <stdio.h>

int f (int x){
  while(x > 0){
    if (x == 2) return x;
    x--;
  }
  
}

int main(){
  return f(0);
}
