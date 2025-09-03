#include <stdio.h>

int main() {
    // declaração de variável
    int numero;

    // entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // processamento e saída
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}
