    //ex. 12 Fa�a um programa que receba tr�s notas de um aluno, calcule e imprima a m�dia
    //aritm�tica entre essas tr�s notas e uma mensagem que segue a tabela abaixo:
    //M�dia         Mensagem
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

    // Sa�da
    printf("Media: %.2f\n", media);

    if (media < 5.0) {
        printf("Reprovado\n");
    } else if (media < 7.0) {   // aqui j� sabemos que media >= 5
        printf("Exame\n");
    } else {  // aqui j� sabemos que media >= 7
        printf("Aprovado\n");
    }

    return 0;
}

