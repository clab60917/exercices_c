#include <stdio.h>

int main(){
  char chaine1[] = { 'H', 'e', 'l', 'l', 'o', '\0'};
  printf("%s\n", chaine1);

  char chaine2[] = "Bonjour, le Mastère Spécialisé CyberSécurité !";
  printf("%s\n", chaine2);

  chaine2[7] = '!';
  printf("%s\n", chaine2);

  // Pas bien !
  chaine1[5] = ' ';
  printf("%s\n", chaine1);

  // Pas bien !
  chaine2[51] = 'X';
  printf("%s\n", chaine2);
  return 0;
}
