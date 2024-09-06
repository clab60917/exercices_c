#include <stdio.h>

int f(int x){
    return (x % 7) != 0;
}

int main() {
  int i = 20;
  int sum = 0;
  while (i > 0) {
    printf("Itération %d\n", i);
    i--;
    if (f(i) == 0) continue;
    sum += i;
  }
  printf("Sum = %d\n", sum);

  return 0;
}
