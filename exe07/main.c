#include <stdio.h>
#include "functions.h"

int main() {

  int x, y;

  scanf("%d %d", &x, &y);

  printf("MDC = %d", mdc(x, y));

  return(0);
}