#include <stdio.h>
int main (){

    float salario, salario_reajustado=0;

    printf("entre com o valor do salario: ");
    scanf("%f", &salario);

    if (salario<500){
        salario_reajustado=1.3*salario;
        printf("salario reajustado=%2f", salario_reajustado);
    }else
        printf("O funcionario nao tem direito ao aumento");
return 0;
}
