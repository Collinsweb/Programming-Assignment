//Program to disburse loans
/*
Author:Maina Collins
Reg No:CT101/G/21678/24
*/
#include <stdio.h>
int main() {
    int age;
    float income;

    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("Enter your annual income (in Ksh):\n");
    scanf("%f",&income);

    if(age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}