#include <stdio.h>

int main() {
    // declara��o de vari�veis
    float preco;
    int codigo;

    // entrada de dados
    printf("Digite o pre�o do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite o c�digo de origem do produto: ");
    scanf("%d", &codigo);

    // processamento e sa�da
    printf("Proced�ncia do produto: ");
    if (codigo == 1) {
        printf("Sul\n");
    } else if (codigo == 2) {
        printf("Norte\n");
    } else if (codigo == 3) {
        printf("Leste\n");
    } else if (codigo == 4) {
        printf("Oeste\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Nordeste\n");
    } else if (codigo == 7 || codigo == 8 || codigo == 9) {
        printf("Sudeste\n");
    } else if (codigo >= 10 && codigo <= 20) {
        printf("Centro-Oeste\n");
    } else if (codigo >= 21 && codigo <= 30) {
        printf("Nordeste\n");
    } else {
        printf("C�digo inv�lido!\n");
    }

    return 0;
}
