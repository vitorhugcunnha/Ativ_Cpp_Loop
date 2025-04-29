#include <stdio.h>
#include <stdlib.h>

int main() {

	int n1, n2;
	
	printf("Digite dois numeros extremos o primeiro que seja menor que o segundo numero.\n");
	scanf("%d %d", &n1, &n2);
	
	if(n1<n2){
			for(int i = n1; i <= n2; i++){ 
			printf("%i \n", i);	
		};
	}else {
		for(int i = n2; i <= n1; i++){ 
		printf("%i \n", i);	
	};
	}

    return 0;
}
