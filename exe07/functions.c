
#include "functions.h"

int mdc(int x, int y) {

  int resto;

  while(y!=0) {
    resto=x%y;
    x=y;
    y=resto; }

  return x; }
