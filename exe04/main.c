#include <stdio.h>
#include "functions.h"

int main() {

  char palavras[100];
  int contador;

  int a=0, e=0, i=0, o=0, u=0;

  fgets(palavras,100,stdin);

  contador=strlen(palavras);

  for (int k=0; k<contador; k++) {
    switch(palavras[k]) {
      case 'A':
      case 'a':
      case 'ã':
      a++; }
    switch(palavras[k]) {
      case 'E':
      case 'e':
      case 'é':
      e++; }
    switch(palavras[k]) {
      case 'I':
      case 'i':
      i++; } 
    switch(palavras[k]) {
      case 'O':
      case 'o':
      o++; }  
    switch(palavras[k]) {
      case 'U':
      case 'u':
      u++; } 

  }

  printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d", a, e, i, o, u);

  return(0);
}