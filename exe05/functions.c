#include <stdio.h>
#include "functions.h"
#include <string.h>

void inverte(char texto[]){

  int i, aux, end, n=strlen(texto);
  end=n-1;
  for(int k; k<n/2; k++){
    aux=texto[k];
    texto[k]=texto[end];
    texto[end]=aux;
    end--; } }
