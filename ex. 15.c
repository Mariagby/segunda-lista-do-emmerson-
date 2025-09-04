#include <stdio.h>
#include <math.h>   // para usar sqrt()

int main() {
    int opcao;
    float num1, num2, resultado;

    // Mostrar menu
    printf("Escolha uma opcao:\n");
    printf("1 - Soma\n");
    printf("2 - Raiz quadrada\n");
    printf("3 - Finalizar\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Processamento
    switch (opcao) {
        case 1:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;

        case 2:
            printf("Digite um numero: ");
            scanf("%f", &num1);
            if (num1 < 0) {
                printf("Nao existe raiz quadrada real de numero negativo!\n");
            } else {
                resultado = sqrt(num1);
                printf("Raiz quadrada de %.2f = %.2f\n", num1, resultado);
            }
            break;

        case 3:
            // não faz nada, só finaliza
            printf("Programa finalizado.\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
