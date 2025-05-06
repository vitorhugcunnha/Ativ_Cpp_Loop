#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	
	int soma = 0;
	char opcao;
	
	do{
		for(int i = 100; i <= 200; i++){
			if(i % 2 == 0){
			soma += i;
		}
	}
	
	printf("A soma e %i\n", soma);
	printf("Deseja repetir a operecao? (s/n)!");
	scanf("%c \n", &opcao);
	
} while(opcao == 's' || opcao == 'S');


    return 0;
    
}