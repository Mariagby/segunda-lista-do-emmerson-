#include <stdio.h>

int main() {
    int idade;
    char risco;
    int codigo = 0; // código do seguro

    // Entrada
    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o grupo de risco (b - baixo, m - medio, a - alto): ");
    scanf(" %c", &risco);  // espaço antes do %c evita problema com Enter

    // Verificação de idade
    if (idade < 18 || idade > 70) {
        printf("Nao pode adquirir seguro.\n");
    } else {
        // 18 a 24
        if (idade >= 18 && idade <= 24) {
            if (risco == 'b') codigo = 7;
            else if (risco == 'm') codigo = 8;
            else if (risco == 'a') codigo = 9;
        }
        // 25 a 40
        else if (idade >= 25 && idade <= 40) {
            if (risco == 'b') codigo = 4;
            else if (risco == 'm') codigo = 5;
            else if (risco == 'a') codigo = 6;
        }
        // 41 a 70
        else if (idade >= 41 && idade <= 70) {
            if (risco == 'b') codigo = 1;
            else if (risco == 'm') codigo = 2;
            else if (risco == 'a') codigo = 3;
        }

        // Saída
        if (codigo != 0) {
            printf("Codigo do seguro: %d\n", codigo);
        } else {
            printf("Grupo de risco invalido.\n");
        }
    }

    return 0;
}
