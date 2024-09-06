#include <stdio.h>

int main(){

  int x = 1, y = 7, z = 8;

  printf("1 + 3 = %d\n", 1 + 3);
  printf("1 / 3 = %d\n", 1 / 3);
  printf("12 / 5 = %d\n", 12 / 5);
  printf("13 %% 5 = %d\n", 13 % 5);
  printf("-13 %% 5 = %d\n", (-13) % 5);
  printf("13 / -5 = %d\n", 13 / (-5));
  printf("13 %% -5 = %d\n", 13 % (-5));

  printf("x = %d\n", x);
  printf("x++ = %d\n", x++);
  printf("x = %d\n", x);
  printf("++x = %d\n", ++x);
  printf("x = %d\n", x);

  printf("y = %d, z = %d\n", y, z);
  printf("y == z = %d\n", y == z);
  printf("y != z = %d\n", y != z);
  printf("y <= z = %d\n", y <= z);
  printf("y < z = %d\n", y < z);
  printf("y >= z = %d\n", y >= z);
  printf("y > z = %d\n", y > z);


  int i = 0x12345678;
  printf("i = 0x%08x\n", i);
  printf("i<<4 = 0x%08x\n", i<<4);
  printf("i>>4 = 0x%08x\n", i>>4);

  printf("NOT: ~ 0x00110011 = 0x%08x\n", ~ 0x00110011);
  printf("OR : 0x000f00f1 | 0xff0033ff = 0x%08x\n", 0x000f00f1 | 0xff0033ff);
  printf("AND: 0x000f00f1 & 0xff0033ff = 0x%08x\n", 0x000f00f1 & 0xff0033ff);
  printf("XOR: 0x000f00f1 ^ 0xff0033ff = 0x%08x\n", 0x000f00f1 ^ 0xff0033ff);


  int bf = 0;
  /* Positionne les bits 3, 5, et 7 à 1 */
  bf |= (1 << 3);
  bf |= (1 << 5);
  bf |= (1 << 7);
  /* Teste les bits 4 et 5 */
  int bit_4_set = (bf & (1 << 4)) != 0;
  int bit_5_set = (bf & (1 << 5)) != 0;

  printf("bf = 0x%08x, bit_4_set = %d, bit_5_set = %d\n", bf, bit_4_set, bit_5_set);

  return 0;
}
