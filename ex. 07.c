#include <stdio.h>

int main() {
    // declaração de variáveis
    int idade;

    // entrada de dados
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    // processamento e saída
    printf("Categoria do nadador: ");
    if (idade >= 5 && idade <= 7) {
        printf("Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Juvenil B\n");
    } else if (idade >= 18) {
        printf("Sênior\n");
    } else {
        printf("Idade inválida para competição.\n");
    }

    return 0;
}
