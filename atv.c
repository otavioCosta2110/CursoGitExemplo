#include <stdio.h>

int main(){
	int n;
	printf("Digite um Numero Inteiro: \n");
	scanf("%i", &n);
	
	if (n % 2 == 0){
		printf("O numero e PAR");
	}
	else{
		printf("O numero e IMPAR");
	}

	return 0;
}
