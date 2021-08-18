#include <stdio.h>
#include "functions.h"

int main() {

  int min, max;
   int n, k=0;
   scanf("%i", &n);
   
	int vet[n];
	
	do {
			scanf("%i", &vet[k]);
	k++; } while (k<n);

  menor_maior(vet, n, &min, &max);
  printf("\nMENOR = %d\nMAIOR = %d", min, max);

  return(0);
}