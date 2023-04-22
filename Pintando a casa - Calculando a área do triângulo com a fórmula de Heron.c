#include<stdio.h>
#include<math.h>

int main(){
    
    float a,b,c,p,at;
    
    scanf("%f %f %f" ,&a ,&b,&c);
    
    p=(a+b+c)/2;
    
   at = sqrt(p*(p-a)*(p-b)*(p-c));
    
    printf("%0.2f\n",at);
    

    
}
