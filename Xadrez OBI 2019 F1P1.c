#include <stdio.h>

int main() {
    int L, C, soma;

   
    scanf("%d %d", &L, &C);

    
    soma = L + C;

    
    if (soma % 2 == 0) {
        printf("1\n"); 
    } else {
        printf("0\n"); 
    }

    
}
