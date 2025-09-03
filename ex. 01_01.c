#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    // Entrada
    printf("Digite as quatro notas do aluno:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    // Processamento
    media = (n1 + n2 + n3 + n4) / 4;

    // Saída
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}
