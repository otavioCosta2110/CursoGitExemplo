#include<stdio.h>
int main(){

        int i, n, total=0;
        printf("digitr o numero inteiro");
        scanf("%i", &n);

	for(i = n; i >= 1; i--){
		if(n % i == 0 ){
		total++;
}
}
	if(total == 2){
	printf("eh primo");
}else{
	printf("nao eh primo");
}


        return 0;
}

