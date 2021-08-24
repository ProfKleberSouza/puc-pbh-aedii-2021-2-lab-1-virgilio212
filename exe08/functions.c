
#include "functions.h"
#include <stdbool.h>

bool is_palindromo(char palavras[]) {

  char aux[100];
  int i=0, j=0, tamanho;

  tamanho=strlen(palavras);

  do {
    if(palavras[i]!=' ' && palavras[i]!= '\n') {
      aux[j]=palavras[i];
      j++; }
    i++; } while(palavras[i]!='\0');
  aux[j]='\0';

  strcpy(palavras, aux);
  tamanho=strlen(palavras);

  j=tamanho-1;
  for (i=0;i<tamanho;i++) {
    if(palavras[i]!=aux[j]) {
      return false; }
    j--; }

  return true; }
