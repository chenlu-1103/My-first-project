#include <stdio.h>

int main(void)
{
	int price = 0;
	
	printf("enter price: ");
	scanf("%d", &price);
	
	int change = 100 - price;
	
	printf("your change is: %d", change);
	
	return 0;
}
