#include <stdio.h>

int main() {
    int P, D1, D2, soma;

    scanf("%d %d %d", &P, &D1, &D2);

    soma = D1 + D2;

    if (soma % 2 == 0) { 
        if (P == 0) {
            printf("0\n"); 
        } else {
            printf("1\n"); 
        }
    } else { 
        if (P == 0) {
            printf("1\n"); 
        } else {
            printf("0\n");
        }
    }

   
}
