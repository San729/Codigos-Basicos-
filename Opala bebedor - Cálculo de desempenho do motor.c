#include<stdio.h>
#include<math.h>

int main(){
    
float dis,des,velo,cons,temp;

scanf("%f",&velo);

scanf("%f",&temp);

scanf("%f",&cons);


temp=temp/60;

dis=velo*temp;

des=dis/cons;
    
printf("%0.2f\n", des);
    
}
