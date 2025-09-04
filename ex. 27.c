//Verificar se dados três valores inteiros quaisquer os mesmo formam um triângulo. Se
//formar informar o tipo, caso contrário, informar que os lados não formam um triângulo.

#include <stdio.h>

int main(){

	int n1, n2, n3;

	printf("Digite tres numeros inteiros, para saber se eles podem formam um triangulo =");
	scanf("%d %d %d", &n1, &n2, &n3);

	if(n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1){

		printf("\nForma um triangulo\n");

		if(n1 == n2 && n1 == n3 ){

			printf("Tipo do triangulo : Equilatero.\n");
		}else if (n1 == n2 || n1 == n3 || n2 == n3){

			printf("Tipo do tringulo : Isosceles.\n");
		}else{

			printf("Tipo do triangulo : escaleno");
		}

	}else{

		printf("Não forma triângulo\n");
	}

 return 0;

}
