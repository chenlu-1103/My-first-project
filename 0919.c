#include <stdio.h>

int main(void)
{
	/*
	long long int res = 0;
	int i;
	int j;
	
	for(i=1;i<=10;i++)
	{
		long long pow = 1;
		
		for(j=1;j<=i;j++)
		{
			pow = pow * i;
		}
		res = res + pow;
	}
	printf("%lld",res);
	*/
	int i;
	
	
	for(i = 0;i <= 1000;i++)
	{
			int j = 0;
			int n = i;
			while(n != 0)
	{
		int temp = n % 10;
		n = n / 10;
		
		j = j + temp;	
	}
	if(j == 15)
	{
		printf("%d\n",i);
	}
	}

	
	
	
	
	
	
	
	
	
	return 0;
}
