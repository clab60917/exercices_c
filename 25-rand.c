#include <stdio.h>
#include <stdlib.h> // pour les fonctions srand et rand
#include <time.h>
// pour la fonction time
int main(){
// Initialisation de la graine
srand(time(NULL));
printf("Un nombre aléatoire : %d\n", rand());
printf("Un autre nombre aléatoire : %d\n", rand());
int x = rand() % 100;
printf("Un nombre aléatoire entre 0 (inclus) et 100 (exclus) : %d\n", x);
return 0;
}