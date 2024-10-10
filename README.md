//Program for do while loop user input
/*
Author:Maina Collins
Reg No:CT101/G/21678/24
*/
#include<stdio.h>

int main(){
	int start,sum=0,stop;
	printf("Enter a value for when to start\n");
	scanf("%d",&start);
	
	printf("Enter a value for when to stop\n");
	scanf("%d",&stop);
	do{
		printf("%d\n",start);
		start++;
		sum+=start;
	}
	while(start<=stop);
	printf("The sum is %d",sum);

return 0;
}
