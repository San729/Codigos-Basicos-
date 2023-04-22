#include <stdio.h>
#include <math.h>

int round(float num) {
    if (num - floor(num) >= 0.5) {
        return ceil(num);
    } else {
        return floor(num);
    }
}

int floor(float num) {
    return (int) num;
}

int ceil(float num) {
    return (int) ceilf(num);
}

int main() {
    char operacao;
    float num;
    scanf("%c %f", &operacao, &num);
    int resultado;
    switch(operacao) {
        case 'r':
            resultado = round(num);
            break;
        case 'f':
            resultado = floor(num);
            break;
        case 'c':
            resultado = ceil(num);
            break;
        default:
            printf("Operacao invalida\n");
            return 1;
    }
    printf("%d\n", resultado);
    return 0;
}
