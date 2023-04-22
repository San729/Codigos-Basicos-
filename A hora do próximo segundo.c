#include <stdio.h>

int main() {
    int hora, minuto, segundo;
    scanf("%d %d %d", &hora, &minuto, &segundo);

    segundo++;
    if (segundo == 60) {
        segundo = 0;
        minuto++;
        if (minuto == 60) {
            minuto = 0;
            hora++;
            if (hora == 24) {
                hora = 0;
            }
        }
    }

    printf("%02d %02d %02d\n", hora, minuto, segundo);
    return 0;
}
