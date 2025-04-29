#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int n, quant = 10; 
	int i = 1;
	int maior, menor;
	int resultado;
	
	printf("Digite 10 numeros. \n");
	printf("Digite o numero: \n");
	scanf("%i", &n);
	
	maior = n;
	menor = n;
	
	for(int i; i <= quant; i++){
		printf("Digite o numero : \n");
		scanf("%i", &n);
		
		if(n > maior){
		maior = n;	
		}
		
		if(n < menor){
		menor = n;
		}
	}
	
	resultado = maior - menor;
	
	printf("A resposta do seu resultado e %i", resultado);
	return 0;
}