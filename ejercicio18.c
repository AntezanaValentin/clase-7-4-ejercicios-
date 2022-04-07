#include <stdio.h>
#include <stdlib.h>

  int main(int argc, char *argv[]) {

  double h = atof(argv[1]);
  double s = atof(argv[2]);
  printf("%.2f\n", h*s);

    return 0;
  }
