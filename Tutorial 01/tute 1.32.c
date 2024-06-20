#include<stdio.h>
int main (void)
{
	int i,num;
	int total =0;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		total = total + i;
		
		
		
	}
	printf("total is:%d",total);
	
	return 0;
}
