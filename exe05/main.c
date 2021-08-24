#include <stdio.h>
#include "functions.h"
#include <string.h>

int main() {

  char palavras[100];
  
  fgets(palavras,100,stdin);

  inverte(palavras);

  printf("%s\n", palavras);

  return(0);
}