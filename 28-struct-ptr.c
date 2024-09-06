#include <stdio.h>

typedef char * string;
struct point {
  int x;
  int y;
  string nom;
};
typedef struct point point;
int main(){
  point p1 = { 3, 4, "A" };
  point * p2 = &p1;
  printf("p1: x = %d, y = %d, nom = %s\n", p1.x, p1.y, p1.nom);
  printf("p2: x = %d, y = %d, nom = %s\n", p2->x, p2->y, p2->nom);
  return 0;
}
