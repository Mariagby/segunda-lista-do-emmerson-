#include <stdio.h>

int main(){

	//declaração de variaveis
	int n1, n2, n3;

	//entrada de daddos
	printf("Entre com tres numeros = ");
	scanf("%d %d %d", &n1, &n2, &n3);


	//casos possiveis
	//primeiro numero maior
	if (n1 > n2 && n1 > n3 && n2 > n3) {
		printf("%d %d %d", n3, n2, n1);
	}
	else if(n1 > n2 && n1 > n3 && n3 > n2){
		printf("%d %d %d", n2, n3, n1);
	}

	//segundo numero maior
	else if(n2 > n1 && n2 > n3 && n1 > n3){
		printf("%d %d %d", n3, n1, n2);
	}
	else if(n2 > n1 && n2 > n3 && n3 > n1){
		printf("%d %d %d", n1, n3, n2);
	}

	//numero tres maior
	else if(n3 > n1 && n3 > n2 && n1 > n2){
		printf("%d %d %d", n2, n1, n3);
	}
	else if(n3 > n1 && n3 > n2 && n2 > n1){
		printf("%d %d %d", n1, n2, n3);
	}

	return 0;

}
