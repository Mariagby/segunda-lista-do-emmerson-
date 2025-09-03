#include <stdio.h>

int main() {
    // declaração de variáveis
    float altura, peso_ideal;
    char sexo;

    // entrada de dados
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);  // o espaço antes de %c evita problemas com o Enter

    // processamento
    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido!\n");
        return 1; // encerra o programa caso sexo seja inválido
    }

    // saída
    printf("O peso ideal é: %.2f kg\n", peso_ideal);

    return 0;
}
