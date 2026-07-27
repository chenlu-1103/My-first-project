#include <stdio.h>

int main(void)
{
	int price = 0;
	
	printf("ÇëÊäÈë½ğ¶î: ");
	scanf("%d", &price);
	
	int change = 100 - price;
	
	printf("ÕÒÄã%dÔª", change);
	
	return 0;
}
