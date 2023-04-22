#include <stdio.h>

int main() {
    float salario_atual, novo_salario;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    if (salario_atual <= 1000.00) {
        novo_salario = salario_atual * 1.20;
    } else if (salario_atual <= 1500.00) {
        novo_salario = salario_atual * 1.15;
    } else if (salario_atual <= 2000.00) {
        novo_salario = salario_atual * 1.10;
    } else {
        novo_salario = salario_atual * 1.05;
    }

    printf("Novo salário: %.2f", novo_salario);

    return 0;
}
