#include <stdio.h>

void printArr(int arr[]);

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	printArr(arr);
	return 0;
}

void printArr(int arr[])
{
	int i;
	for(i = 0;i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
}
