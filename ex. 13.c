#include <stdio.h>

int main(){
//Declarando vari�veis
    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);
//Sele��o, Procesamento e Sa�da
    if(idade>=0 && idade<=2){
        printf("Recem-nascido");
    }else if(idade>=3 && idade<=11){
        printf("Crianca");
    }else if(idade>=12 && idade<=19){
        printf("Adolescente");
    }else if(idade>=20 && idade<=55){
        printf("Adulto");
    }else{
    printf("Idoso");
    }
    return 0;
}
