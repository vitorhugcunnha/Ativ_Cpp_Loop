#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	
	int i = 1, numero, numero2, numero_max = 10;
	
	system("color 02");
	printf("Qual numero da tabuada se quer?\n");
	scanf("%i", &numero);
	
	for(i; i <= numero_max; i++){
		numero2 = numero * i;
		printf("\n %i X %i = %i \n", numero, i, numero2);
	}	
	
	return 0;
}