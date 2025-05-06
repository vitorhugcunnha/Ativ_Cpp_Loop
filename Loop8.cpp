#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){
	
    float populacao_A = 80000, populacao_B = 200000;
    int anos = 0;

    while (populacao_A <= populacao_B) {
        populacao_A *= 1.03;
        populacao_B *= 1.015;
        anos++;		
    }

    printf("Numero de anos necessarios para que a populacao do pais A ultrapasse ou iguale a do pais B: %i\n", anos);
    return 0;
    
}