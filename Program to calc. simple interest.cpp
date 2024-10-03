//Program to calculate simple interest
/*
Reg No:CT101/G/21678/24
Author:Collins
Date:25/09/2024
*/
#include <stdio.h>
int main() {
    float principal,rate,time,simpleinterest;

    printf("enter principal\n");
    scanf("%f",&principal);
    printf("The principal is %f\n",principal);
    
    printf("enter rate\n");
    scanf("%f",&rate);
    printf("The rate is %f\n",rate);
    
    printf("enter time\n");
    scanf("%f",&time);
    printf("The time is %f\n",time);

    simpleinterest=(principal*rate*time)/100;
    printf("simpleinterest is %.2f:",simpleinterest);

    return 0;
}