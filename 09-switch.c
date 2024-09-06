#include <stdio.h>

int main() {
  int i = 2;
  switch (i) {
    case 0:
      printf("C'est nul !\n");
      break;
    case 1:
    case 3:
      printf("C'est un petit nombre impair\n");
      break;
    case 2:
      printf("Les 2 font la paire !\n");
      break;
    default:
      printf("Je ne sais pas, c'est trop grand.\n");
  }
  return 0;
}