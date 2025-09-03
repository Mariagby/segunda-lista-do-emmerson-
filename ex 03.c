#include <stdio.h>
int main(){
    int idade;

    printf("Entre com com sua idade: ");
    scanf("%d", &idade);

    switch(idade){
        case 5:
        case 6:
        case 7: printf("Infantil A"); break;
        case 8:
        case 9:
        case 10:printf("Infantil B"); break;
        case 11:
        case 12:
        case 13: printf("Juvenial C"); break;
        case 14:
        case 15:
        case 16:
        case 17: printf("Juvenil D"); break;
        default: printf("Senior");
    }
return 0;
}
