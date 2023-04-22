#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int resto = a % b;
    float divisao = (float) a / b;

    printf("%d\n", soma);
    printf("%d\n", subtracao);
    printf("%d\n", multiplicacao);
    printf("%.2f\n", divisao);
    printf("%d\n", resto);

    
}
