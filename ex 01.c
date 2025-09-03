#include <stdio.h>
int main (){
//declaracao de variavel
    float n1, n2, n3, n4;
    float media=0;
//entrada de dados
    printf("Entre com as quatro notas:\n");
    printf("Entre com a primeira nota: ");
    scanf("%f", &n1);
    printf("Entre com a segunda nota: ");
    scanf("%f", &n2);
    printf("Entre com a terceira nota: ");
    scanf("%f", &n2);
    printf("Entre com a quarta nota: ");
    scanf("%f", &n4);
//processamento e saida
        media=(n1, n2, n3, n4)/4;
        if (media<=7){
             printf("Aprovado");
}        else{
            printf("Reprovado");
}
return 0;


}
