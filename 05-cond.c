#include <stdio.h>

int main(){
	int i = 12;
	int j = 14;

	printf("*** Premier test\n");
	if (i > j) {
		printf("%d > %d\n", i, j);
	} else {
		printf("%d >= %d\n", j, i);
	}

	printf("*** Deuxième test\n");
	if (i > j) {
		printf("%d > %d\n", i, j);
	}

	printf("*** Troisième test\n");
	if (i > j) {
		printf("%d > %d\n", i, j);
	} else if (j > i) {
		printf("%d > %d\n", j, i);
	} else {
		printf("%d == %d\n", j, i);
	}

	return 0;
}


