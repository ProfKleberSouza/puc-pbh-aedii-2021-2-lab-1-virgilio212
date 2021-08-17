#include <stdio.h>
#include "functions.h"

int main() {

  int min;
   int n, k=0;
   scanf("%i", &n);
   
	int vet[n];
	
	do {
			scanf("%i", &vet[k]);
	k++; } while (k<n);

  min = menor(vet, n);

  printf("\nMENOR = %d", min);

  return(0);
}