    //ex. 12 Faça um programa que receba três notas de um aluno, calcule e imprima a média
    //aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:
    //Média         Mensagem
    //0.0 |__ 5.0 reprovado
    //5.0 |__ 7.0 exame
    //7.0 |__| 10.0 aprovado


#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    // Entrada
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    // Processamento
    media = (n1 + n2 + n3) / 3;

    // Saída
    printf("Media: %.2f\n", media);

    if (media < 5.0) {
        printf("Reprovado\n");
    } else if (media < 7.0) {   // aqui já sabemos que media >= 5
        printf("Exame\n");
    } else {  // aqui já sabemos que media >= 7
        printf("Aprovado\n");
    }

    return 0;
}

