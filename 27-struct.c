#include <stdio.h>

struct point {
  int x;
  int y;
  char * nom;
};

int main(){
  struct point p1 = { 3, 4, "A" };
  struct point p2;
  p2.x = 12;
  p2.y = 7;
  p2.nom = "B";
  struct point p3 = { .y = 8, .nom = "C",  .x = 7} ;
  printf("p1: x = %d, y = %d, nom = %s\n", p1.x, p1.y, p1.nom);
  printf("p2: x = %d, y = %d, nom = %s\n", p2.x, p2.y, p2.nom);
  printf("p3: x = %d, y = %d, nom = %s\n", p3.x, p3.y, p3.nom);
  return 0;
}
