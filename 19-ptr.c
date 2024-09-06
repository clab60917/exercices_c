#include <stdio.h>

int main(){
	int x = 1234567;
	int * y = &x;
  printf("y = %p\n", y);
	printf("%d\n", *y);
  *y = 4;
	printf("%d\n", *y);
	printf("%d\n", x);
	return 0;
}
