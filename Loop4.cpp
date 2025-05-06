#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	
	int quantidade, i = 1;
	float nota, soma=0, media;
	
	printf("Qual e a quantidade de notas que tu vai inserir?\n");
	scanf("%i", &quantidade);
	
	for(i;i<=quantidade;i++){
		printf("Digite %i nota: ", i);
		scanf("%f", &nota);
		soma += nota;
	}
	
	media = soma/quantidade;
	
	printf("A sua media e: %f", media);
	
	return 0;
}