#include <stdio.h>

int main() {
    // declara��o de vari�vel
    int numero;

    // entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // processamento e sa�da
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}
