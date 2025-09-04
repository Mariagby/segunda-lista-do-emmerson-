#include <stdio.h>

int main() {
    float salarioMinimo, valorHora, salarioMes;
    int horasTrabalhadas, dependentes, horasExtras;
    float valorDependentes, valorHoraExtra, valorHorasExtras;
    float salarioBruto, irrf, salarioLiquido, gratificacao, salarioFinal;

    // Entrada
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    printf("Digite o numero de horas extras trabalhadas: ");
    scanf("%d", &horasExtras);

    // Cálculo do valor da hora
    valorHora = salarioMinimo / 5.0;

    // Salário do mês
    salarioMes = horasTrabalhadas * valorHora;

    // Dependentes
    valorDependentes = dependentes * 32.0;

    // Horas extras
    valorHoraExtra = valorHora * 1.5;  // 50% a mais
    valorHorasExtras = horasExtras * valorHoraExtra;

    // Salário bruto
    salarioBruto = salarioMes + valorDependentes + valorHorasExtras;

    // Imposto de renda (IRRF)
    if (salarioBruto < 200.0) {
        irrf = 0.0;
    } else if (salarioBruto <= 500.0) {
        irrf = salarioBruto * 0.10;
    } else {
        irrf = salarioBruto * 0.20;
    }

    // Salário líquido
    salarioLiquido = salarioBruto - irrf;

    // Gratificação
    if (salarioLiquido <= 350.0) {
        gratificacao = 100.0;
    } else {
        gratificacao = 50.0;
    }

    // Salário final
    salarioFinal = salarioLiquido + gratificacao;

    // Saída
    printf("\n RESUMO DO SALARIO \n");
    printf("Salario minimo: R$ %.2f\n", salarioMinimo);
    printf("Valor da hora trabalhada: R$ %.2f\n", valorHora);
    printf("Salario do mes: R$ %.2f\n", salarioMes);
    printf("Valor por dependentes: R$ %.2f\n", valorDependentes);
    printf("Valor das horas extras: R$ %.2f\n", valorHorasExtras);
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("IRRF: R$ %.2f\n", irrf);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Salario a receber: R$ %.2f\n", salarioFinal);

    return 0;
}
