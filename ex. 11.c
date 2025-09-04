#include <stdio.h>


int main() {
    int num1, num2;

    // Entrada
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Processamento e Saída
    if (num1 < num2) {
        printf("O menor numero e: %d\n", num1);
    } else if (num2 < num1) {
        printf("O menor numero e: %d\n", num2);
    } else {
        printf("Os dois numeros sao iguais: %d\n", num1);
    }

    return 0;
}
