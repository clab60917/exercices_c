#include <stdio.h>

int longueur(char *s){
  int lg = 0;
  while (s[lg] != '\0'){
    lg++;
  }
  return lg;
}

int main(){
	char* s = "Ma super chaine de caracteres";
	printf("s a pour longueur %d\n", longueur(s));
	return 0;
}

