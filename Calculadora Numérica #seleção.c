#include<stdio.h>

int main(){
    int a , b;
    
    char operador;
    
    scanf("%d%d %c", &a,&b,&operador);
    
   
    if(operador == '+'){
         
        printf("%d\n",a+b);
    }
    
    else if(operador == '-'){
     
        printf("%d\n",a-b);
        
    }
       else if(operador == '*'){
          
        printf("%d\n",a*b);
        
        
    }else printf("%d\n",a/b);
}
