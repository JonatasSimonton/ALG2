#include <stdio.h>

int main () {
    double salario_bruto;
    printf("Salário bruto: ");
    scanf("%lf", &salario_bruto);
    double imposto;
    if (salario_bruto <= 2000.00) {
        imposto = 0.00;
    }
    else if (salario_bruto <= 4000.00) {
        imposto = salario_bruto * 0.075;
    }
    else if (salario_bruto <= 6000.00) {
        imposto = salario_bruto * 0.15;
    }
    else if (salario_bruto <= 10000.00) {
        imposto = salario_bruto * 0.225;
    }
    else {
        imposto = salario_bruto * 0.275;
    }

    double salario_liquido = salario_bruto - imposto;
    printf("Imposto: %.2lf\n", imposto);
    printf("Salário Líquido: %.2lf\n", salario_liquido);

    return 0;
}