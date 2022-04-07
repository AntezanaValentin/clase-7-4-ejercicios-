#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int v1 = atoi(argv[1]);
  int u1 = atoi(argv[2]);
  int v2 = atoi(argv[3]);
  int u2 = atoi(argv[4]);
  printf("Cordenada en X: %d\n", v1*u1);
  printf("Cordenada en Y: %d\n", v2*u2);
  return 0;
}
