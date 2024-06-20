#include<stdio.h>
int main(void)
{
	int distance;
	float amount;
	
	printf("enter the distance:");
	scanf("%d",&distance);
	
	if(distance<=30)
	{
		amount = distance * 50;
		printf("amount is:%.2f",amount);
	}
	else
	{
		amount = 30 * 50 + (distance -30) * 40;
		printf("amount is:%.2f",amount);
	}
	
	return 0;
}
