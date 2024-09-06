#include <stdio.h>

void affiche_tab(int tab[], int n){
	printf("[");
	for(int i = 0; i < n; i++){
		printf("%d", tab[i]);
		if (i != n - 1){
			printf(", ");
		}
	}
	printf("]\n");
}

int sumtab(int tab[], int n){
	return 0;
}

int main(){
  int tab[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(tab)/sizeof(tab[0]);
  affiche_tab(tab, n);
  printf("Sum: %d\n", sumtab(tab, n));
  return 0;

}
