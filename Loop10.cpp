#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	
	int base, expoente, potencia = 1;
	
	printf("Quais sao os dois numeros?\n");
	scanf("%i %i", &base, &expoente);
	
	for(int i = 1; i <= expoente ; i++){
		potencia *= base;
	}           
	
	printf("O resultado da potencia e %i ", potencia);
	
	return 0;
}