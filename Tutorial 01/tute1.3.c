#include<stdio.h>
int main(void)
{
	int num, count=0;
	int total =0;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	while(num!=-1)
	{
		printf("enter the number:");
	    scanf("%d",&num);
	    
	    total = total +num;
	    count++;
	    
	    
	}
	
	printf("total is:%d\n",total);
	
	return 0;
	
}
