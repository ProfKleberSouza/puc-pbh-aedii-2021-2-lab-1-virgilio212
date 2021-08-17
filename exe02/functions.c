
#include "functions.h"

int menor(int v[], int n) {

  int min=10000;

  for (int i=0; i<n; i++) {
      if (v[i]<min)
      min=v[i];
     }
    
   return min;
}
