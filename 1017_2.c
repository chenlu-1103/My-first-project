#include <stdio.h>

int main(void)
{
	int arr[] = {33,5,22,104,99};
	
	int max = arr[0];
	int len = sizeof(arr) / sizeof(int);
	int i,index;
	for(i = 1;i < len; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	printf("%d\n", max);
	printf("%d\n", index);
	return 0;
}
