#include <stdio.h>

int nb_occurrences(char caractere, char * chaine){
    return 0;
}

int main(){
    int n = nb_occurrences('c', "CentraleSupelec");
    printf("Nombre de c = %d\n", n);
    n = nb_occurrences('e', "CentraleSupelec");
    printf("Nombre de e = %d\n", n);
    n = nb_occurrences('Z', "CentraleSupelec");
    printf("Nombre de Z = %d\n", n);
    return 0;
}
