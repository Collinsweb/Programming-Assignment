//Program to calculate compound interest 
/*
Reg No.: CT101/G/21678/24
Author:Maina Collins 
Date:26/09/2024
*/
#include <stdio.h>
#include<math.h>

int main(){
   float principal,rate,time,compoundinterest;
    
   printf("enter principal\n");
   scanf("%f",&principal);
   printf("The principal is %f\n",principal);
   
   printf("enter rate\n");
   scanf("%f",& rate);
   printf("The rate is %f\n",rate);
   
   printf("enter time\n");
   scanf("%f",&time);
   printf("The time is %f\n",time);
   
   compoundinterest=principal*pow((1+rate/100),time);
   printf("compoundinterest is %.2lf", compoundinterest);
  
return 0;
}   