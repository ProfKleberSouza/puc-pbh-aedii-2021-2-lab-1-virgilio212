#include <stdio.h>
#include "functions.h"
#include <stdbool.h> 

int main() {

  char palavras[100];
  
  fgets(palavras,100,stdin);

  if(is_palindromo(palavras)==true)
  printf("SIM\n");
  else
  printf("NAO\n");

  return(0);
}