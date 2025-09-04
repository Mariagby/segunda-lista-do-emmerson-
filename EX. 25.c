//Escreva um programa que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta
//e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado:

#include <stdio.h>
#include <locale.h>

int main(){

	//declaração de variaveis
	float preco, valor_final;
	int codigo;

	//etrada de dados
	printf("Digite o valor do produto = ");
	scanf("%f", &preco);

	printf("\ncondicao de pagamento\n");
	printf("1 - a vista em dinheiro ou cheque, recebe 10 porcento de desconto.\n");
	printf("2 - a vista no cartão de crédito, recebe 5 porcento de desconto.\n");
	printf("3 - Em 2 vezes, preço normal de etiqueta sem juros.\n");
	printf("4 - Em 3 vezes, preço normal de etiqueta mais juros de 10%.\n");

	printf("escolha a condicao de pagamento = ");
	scanf("%i", &codigo);

	if (codigo == 1){

		printf("\nCondicao de pagamneto escolhida : a vista em dinheiro ou cheque, recebe 10 porcento de desconto.\n ");
		valor_final = preco * 0.9;

	}else if (codigo == 2){

		printf("\nCondicao de pagamneto escolhida :  a vista no cartão de crédito, recebe 5 porcento de desconto.\n ");
		valor_final = preco * 0.95;

	}else if (codigo == 3){

		printf("\nCondicao de pagamneto escolhida : Em 2 vezes, preço normal de etiqueta sem juros.\n ");
		valor_final = preco;

	}else if (codigo == 4){

		printf("\nCondicao de pagamneto escolhida : Em 3 vezes, preço normal de etiqueta mais juros de 10%.\n ");
		valor_final = preco * 1.10;
	}else{
		printf("\nCodigo invalido\n");
	}


	printf("O preco final do produto = %2.f", valor_final);

	return 0;

}
