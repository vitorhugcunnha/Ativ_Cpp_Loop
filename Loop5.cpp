#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	
	float media;
	int quantidade_turma, quantidade_alunos, soma, i = 1;
	
	printf("Qual a quantidade de turmas?\n");
	scanf("%i", &quantidade_turma);
	
	for(i;i<=quantidade_turma;i++) {
		printf("Qual e a quantidade de alunos? %i\n", i);
		scanf("%i", &quantidade_alunos);
		if(quantidade_alunos <= 40){
			soma += quantidade_alunos;
		}else{
			printf("Nao pode ser mais de quarenta alunos.\n");
			i--;
		}
	}
	
	media = (float)soma/quantidade_turma;
	printf("A media de alunos e %.f2", media);
	
	return 0;
}