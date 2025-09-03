#include <stdio.h>

int main() {
    // declara��o de vari�veis
    int idade;

    // entrada de dados
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    // processamento e sa�da
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
        printf("S�nior\n");
    } else {
        printf("Idade inv�lida para competi��o.\n");
    }

    return 0;
}
