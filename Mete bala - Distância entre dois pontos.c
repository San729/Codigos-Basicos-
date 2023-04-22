#include<stdio.h>
#include<math.h>
int main()
{
    
  float Xa,Xb,Ya,Yb,dist;
    
    scanf("%f%f%f%f",&Xa,&Ya,&Xb,&Yb);
   
    
    dist = sqrt(pow(Xb-Xa,2) + pow(Yb-Ya,2));
    
    
    printf("%.2f\n",dist);
    
    
}
