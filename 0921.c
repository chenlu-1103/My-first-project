#include <stdio.h>
/*


void bulter(void)
{
	printf("you rang, sir?\n");
}

int main(void)
{
	printf("I will summon the bulter function.\n");
	bulter();
	printf("Yes.Bring me some tea and writeable DVDs.\n");
	
	return 0;
}
*/


void sum(int num1,int num2)
{
	
	int sum = num1 + num2;
	printf("%d\n", sum);
}

void i(int i)
{
	for(i;i>=1;i--)
	{
		printf("chen lu\n");
	}
}



int main(void)
{
	sum(20,30);
	sum(40,50);
	i(10);
	return 0;
}
