#include <stdio.h>

int f(int x){
    return (x % 7) != 0;
}

int main() {
  int i = 20;
  while (i > 0) {
    printf("Itération %d\n", i);
    i--;
    if (f(i) == 0) break;
  }

  return 0;
}
