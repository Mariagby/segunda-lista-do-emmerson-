#include <stdio.h>

int main() {
    // declara��o de vari�veis
    float altura, peso_ideal;
    char sexo;

    // entrada de dados
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);  // o espa�o antes de %c evita problemas com o Enter

    // processamento
    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inv�lido!\n");
        return 1; // encerra o programa caso sexo seja inv�lido
    }

    // sa�da
    printf("O peso ideal �: %.2f kg\n", peso_ideal);

    return 0;
}
