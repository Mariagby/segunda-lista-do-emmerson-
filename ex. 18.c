#include <stdio.h>

int main() {
    int horasExtrasMin, horasFaltaMin;
    float H;
    int premio;

    // Entrada
    printf("Digite o numero de horas extras (em minutos): ");
    scanf("%d", &horasExtrasMin);

    printf("Digite o numero de horas-falta (em minutos): ");
    scanf("%d", &horasFaltaMin);

    // C�lculo de H
    H = horasExtrasMin - (2.0 / 3.0) * horasFaltaMin;

    // Determina��o do pr�mio
    if (H > 2400) {
        premio = 500;
    } else if (H >= 1800) {
        premio = 400;
    } else if (H >= 1200) {
        premio = 300;
    } else if (H >= 600) {
        premio = 200;
    } else {
        premio = 100;
    }

    // Sa�da
    printf("\nHoras extras: %.2f horas\n", horasExtrasMin / 60.0);
    printf("Horas-falta: %.2f horas\n", horasFaltaMin / 60.0);
    printf("Valor do premio: $%d\n", premio);

    return 0;
}
