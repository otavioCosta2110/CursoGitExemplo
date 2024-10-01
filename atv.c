#include <stdio.h>

int main(){
	int n, i, total = 0;
	printf("Digite um Numero Inteiro: \n");
	scanf("%i", &n);
	
	for (i = n; i >= 1; i --){
		if (n % i == 0){
			total++;
		}	
	}

	if (total == 2){
		printf("O numero E primo");
	}
	else{
		printf("O numero NAO E primo");
	}
	return 0;

}
