#include <stdio.h>
#include <math.h>

int main() {
    int c, b, g, m, total, tempo;
    scanf("%d %d %d %d", &c, &b, &g, &m);
    total = b + g + m;
    tempo = total / c;
    if (total % c != 0) {
        tempo++;
    }
    printf("%d\n", tempo);
    return 0;
}
