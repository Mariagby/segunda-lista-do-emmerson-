#include <stdio.h>

int main() {
    // declaração de variáveis
    float salario, salario_reajustado;

    // entrada de dados
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    // processamento
    if (salario <= 300) {
        salario_reajustado = salario + (salario * 0.50);
    } else {
        salario_reajustado = salario + (salario * 0.30);
    }

    // saída
    printf("O salário reajustado é: R$ %.2f\n", salario_reajustado);

    return 0;
}
