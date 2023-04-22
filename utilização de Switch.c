#include<stdio.h>

int main()
{
    
    int dia ;
    
    scanf("%d",&dia);

switch (dia) {
    case 1:
        printf("Hoje é segunda-feira.");
        break;
    case 2:
        printf("Hoje é terça-feira.");
        break;
    case 3:
        printf("Hoje é quarta-feira.");
        break;
    case 4:
        printf("Hoje é quinta-feira.");
        break;
    case 5:
        printf("Hoje é sexta-feira.");
        break;
    case 6:
        printf("Hoje é sábado.");
        break;
    case 7:
        printf("Hoje é domingo.");
        break;
    default:
        printf("Dia inválido.");
        break;
}

    
}
