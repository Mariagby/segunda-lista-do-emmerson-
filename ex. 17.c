#include <stdio.h>

int main() {
    int angulo;

    // Entrada
    printf("Digite o angulo em graus: ");
    scanf("%d", &angulo);

    // Reduzir ao intervalo [-360, 360]
    while (angulo > 360) {
        angulo -= 360;
    }
    while (angulo < -360) {
        angulo += 360;
    }

    // Processamento e saída
    if (angulo >= 0 && angulo < 90) {
        printf("1o quadrante\n");
    } else if (angulo >= 90 && angulo < 180) {
        printf("2o quadrante\n");
    } else if (angulo >= 180 && angulo < 270) {
        printf("3o quadrante\n");
    } else if (angulo >= 270 && angulo <= 360) {
        printf("4o quadrante\n");
    } else if (angulo <= 0 && angulo > -90) {
        printf("1o quadrante\n");
    } else if (angulo <= -90 && angulo > -180) {
        printf("2o quadrante\n");
    } else if (angulo <= -180 && angulo > -270) {
        printf("3o quadrante\n");
    } else if (angulo <= -270 && angulo >= -360) {
        printf("4o quadrante\n");
    } else {
        printf("Angulo nao pertence a nenhum quadrante valido.\n");
    }

    return 0;
}
