#include<stdio.h>

int main(){
	int principle;
	int rate;
	int time;
	
	printf("Enter the principle:");
	scanf("%d",&principle);
	
	printf("Enter the rate");
	scanf("%d",&rate);
	
	printf("enter time");
	scanf("%d",&time);
	
	int simpleInterest;
	
	simpleInterest=(principle*rate*time)/100;
	
	printf("Your simple interest is %d",simpleInterest);
	
	
	
	
	
	return 0;
}
