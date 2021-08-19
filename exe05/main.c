#include <stdio.h>
#include "functions.h"

int main() {

  char palavras[100];
  
  fgets(palavras,100,stdin);

  inverte(palavras);

  printf("%s", palavras);

  return(0);
}