
#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior) {
  
  *menor=*v;
  *maior=*v;
  for(int i=0; i<n; i++) {
    if(*menor>*(v+i))
      *menor=*(v+i);
    if(*maior<*(v+i))
      *maior=*(v+i);


  }
    

}
