#include <stdio.h>

int main() {
    // declaração de variáveis
    float preco;
    int codigo;

    // entrada de dados
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo);

    // processamento e saída
    printf("Procedência do produto: ");
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
        printf("Código inválido!\n");
    }

    return 0;
}
