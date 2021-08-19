
#include "functions.h"

int potencia (int x, int n) {

  int total=x;
  
  for (int i=1; i<n; i++) {
    total=total*x; }

  return total; }
