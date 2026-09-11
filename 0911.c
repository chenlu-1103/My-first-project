#include <stdio.h>

int main(void)
{
	
	/*int num;
	int rev = 0;
	scanf("%d" ,&num);
	int a=num;
	while(num!=0)
	{
		int i = num % 10;
		num = num / 10;
		rev = rev * 10 + i;
	}
	if(rev==a)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	*/
	/*
	int a;
	int b;
	int c =0;
	scanf("%d %d" ,&a ,&b);
	int max = a>b?a:b;
	int min = a<b?a:b; 
	while(max>=min)
	{
		max = max -min;
		
		c++;
	}
	printf("商%d余%d" ,c ,max);
	*/
	/*
	int i = 1;
	for(i ;i <= 100 ;i++)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			printf("%d", i);
			break;
		}
	 } 
	*/
	/*
	int i = 1;
	for(i;i <= 5;i++)
	{
		if(i == 3)
		{
			continue;
		}
		printf("在吃第%d个包子\n", i);
		
	}
	*/
	int i = 1;
	for(i; i <= 3; i++)
	{
		int j = 1;
	    for(j; j <= 5; j++)
	  {
		printf("*");
		
	  }
	printf("\n");
	
	
	}
	
	
	
	return 0;
}

	
