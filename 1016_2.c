#include <stdio.h>

int main(void)
{
	int arr[] = {1,2,3,4,5};
	int num1 = arr[0];
	printf("%d\n", num1);
	arr[4] = 10;
	printf("%d\n", arr[4]);
	return 0;
}
