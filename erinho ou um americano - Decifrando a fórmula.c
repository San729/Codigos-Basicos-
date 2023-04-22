#include <stdio.h>

int main() {
    int jog1, jog2, jog3, jog4, soma;

    scanf("%d %d %d %d", &jog1, &jog2, &jog3, &jog4);

    soma = jog1 + jog2 + jog3 + jog4;

    if (soma == 0) {
        printf("nenhum\n");
    } else {
        int vencedor = soma % 4;

        if (vencedor == 0) {
            printf("jog4\n");
        } else {
            printf("jog%d\n", vencedor);
        }
    }

    return 0;
}
