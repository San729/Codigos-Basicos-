#include <stdio.h>

int main() {
  int hora, minuto, dia, mes, ano;

  scanf("%d %d %d %d %d", &hora, &minuto, &dia, &mes, &ano);
  if (hora == 24) {
    printf("%02d:%02d %02d/%02d/%02d\n", hora-24, minuto, dia, mes, ano % 100);
  }
     else{
         
         if (hora >= 12) {
    hora -= 12;
  }
 
  printf("%02d:%02d %02d/%02d/%02d\n", hora, minuto, dia, mes, ano % 100);
}
  

  
}
  

 
