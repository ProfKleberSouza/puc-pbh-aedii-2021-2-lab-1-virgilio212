#include <stdio.h>
#include "functions.h"
#include <string.h>

int main() {

  char palavras[10000];
  
  fgets(palavras,10000,stdin);

  inverte(palavras);

  printf("%s\n", palavras);

  return(0);
}