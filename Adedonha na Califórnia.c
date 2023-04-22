#include<stdio.h>

int main(){
    
    int n;
    
    char c;
    
    scanf("%d",&n);
    
    if (n){
        
    
    c=(n-1)%26+ 97;//tabela asck
    
    printf("%c\n",c);}
    
    else
    
    printf("joguem de novo\n");
}
