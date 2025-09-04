#include <stdio.h>

int main() {
    int codigo;

    // Entrada
    printf("Digite o codigo do funcionario (1 a 5): ");
    scanf("%d", &codigo);

    // Processamento e Saída
    if (codigo == 1) {
        printf("Cargo: Escriturario\n");
        printf("Percentual de aumento: 50%%\n");
    } else if (codigo == 2) {
        printf("Cargo: Secretario\n");
        printf("Percentual de aumento: 35%%\n");
    } else if (codigo == 3) {
        printf("Cargo: Caixa\n");
        printf("Percentual de aumento: 20%%\n");
    } else if (codigo == 4) {
        printf("Cargo: Gerente\n");
        printf("Percentual de aumento: 10%%\n");
    } else if (codigo == 5) {
        printf("Cargo: Diretor\n");
        printf("Nao tem aumento\n");
    } else {
        printf("Codigo invalido!\n");
    }

    return 0;
}
