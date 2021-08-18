#include <stdio.h>
#include "functions.h"

int main() {

  char palavras[100];
  
  fgets(palavras,100,stdin);

  numero_vogais(palavras);

  return(0);
}