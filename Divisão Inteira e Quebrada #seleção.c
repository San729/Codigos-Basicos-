#include<stdio.h>

int main(){
    
    int n1, n2, resint ,resto ;
     float restoflo;
    
    
    scanf("%d %d",&n1, &n2);
    
    resint= n1/n2;
    
    resto= n1%n2;
    
    restoflo=(float)n1/n2;
    
    printf("%d\n%d\n%.2f\n", resint, resto, restoflo);
    

    
}
