#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	
	float valor_cd, media, i = 1, valor_total=0;
	int quantidade_cd;

	printf("Qual e a quantidade de cds?\n ");
	scanf("%i",&quantidade_cd);
	
	for(i;i<=quantidade_cd;i++){
		printf("Digite o valor %i cd: ", i);
		scanf("%f", &valor_cd);
		valor_total += valor_cd;
	}
	
	media = valor_total / quantidade_cd;
	
	printf("O valor total e R$ %.2f\n", valor_total);
	printf("O valor medio e R$ %.2f\n", media);
	return 0;
}	
	
	return 0;
}