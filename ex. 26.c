//Escreva um programa que leia o valor de dois números inteiros e a operação aritmética
//desejada: calcule, então, a reposta adequada. Utilize os símbolos da tabela a seguir para ler
//qual a operação aritmética escolhida:

#include <stdio.h>

int main(){

	int n1, n2;
	float resultado;
	char escolha;

	printf("Digite dois numeros = ");
	scanf("%d %d", &n1, &n2);

	printf("\nOperacoes aritmeticas\n");
	printf("1 - soma\n");
	printf("2 - subtracao\n");
	printf("3 - multiplicacao\n");
	printf("4 - divisao\n");

	printf("Digite o codigo da operaçao = ");
	scanf(" %c", &escolha);

	if (escolha == '+'){

		printf("\nOperacao escolhida : soma\n");
		resultado = n1 + n2;

	}else if (escolha == '-'){
		printf("\nOperacao escolhida : subtracao\n");
		resultado = n1 - n2;

	}else if (escolha == '*'){

	    printf("\nOperacao escolhida : multiplicacao\n");
		resultado = n1 * n2;

	}else if (escolha == '/'){
        if (n2 != 0) {
            printf("\nOperacao escolhida: divisao\n");
            resultado = (float)n1 / n2;
        } else {
            printf("\nErro: divisao por zero nao permitida!\n");
            return 1;
        }
    }else{
		printf("Codigo invalido.");
	}

	printf("Resultado = %f" , resultado);

	return 0;
}
