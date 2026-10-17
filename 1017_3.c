#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contains(int arr[], int len, int num);

int main(void)
{
	int arr[10] = {0};
	int len = sizeof(arr) / sizeof(int);
	srand(time(NULL));
	int i;
	for(i=0;i<len;)
	{
		int num = rand() % 100 +1;
		int flag = contains(arr, len, num);
		if(!flag)
		{
			arr[i] = num;
			i++;
		}
	}
	
	int sum = 0;
	
	for(i=0;i<len;i++)
	{
		sum = sum + arr[i];
	}
	printf("%d\n", sum);
	
	double avg = (double)sum / len;
	printf("平均数为:%.2f\n", avg);
	
	int count = 0;
	for(i = 0;i < len;i++)
	{
		if(arr[i]<avg)
		{
			count++;
		}
	}
	
	printf("一共有%d个数比平均数小\n", count);
	
	
	
	return 0;
}
int contains(int arr[], int len, int num)
{
	int i;
	for(i = 0;i < len;i++)
	{
		if(arr[i]==num)
		{
			return 1;
		}
	}
	return 0;
}

