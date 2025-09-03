#include <stdio.h>

int main() {
    // declaração de variáveis
    float nota_lab, nota_av, nota_exame;
    float media_final;
    char conceito;

    // entrada de dados
    printf("Digite a nota do trabalho de laboratório (0 a 10): ");
    scanf("%f", &nota_lab);

    printf("Digite a nota da avaliação semestral (0 a 10): ");
    scanf("%f", &nota_av);

    printf("Digite a nota do exame final (0 a 10): ");
    scanf("%f", &nota_exame);

    // processamento
    media_final = (nota_lab * 2 + nota_av * 3 + nota_exame * 5) / 10;

    if (media_final >= 8.0 && media_final <= 10.0) {
        conceito = 'A';
    } else if (media_final >= 7.0 && media_final < 8.0) {
        conceito = 'B';
    } else if (media_final >= 6.0 && media_final < 7.0) {
        conceito = 'C';
    } else if (media_final >= 5.0 && media_final < 6.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    // saída
    printf("\nMédia final: %.2f\n", media_final);
    printf("Conceito: %c\n", conceito);

    return 0;
}
