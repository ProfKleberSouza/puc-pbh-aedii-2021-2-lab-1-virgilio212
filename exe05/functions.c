#include <stdio.h>
#include "functions.h"
#include <string.h>

void inverte(char texto[]){

  int aux, end, n=strlen(texto);
  end=n-1;
  for(int k=0; k<n/2; k++){
    aux=texto[k];
    texto[k]=texto[end];
    texto[end]=aux;
    end--; } }
