#include <stdio.h>

int main(void)
{
	int x = 3;
	int y = x * x;
	
	printf("%d = %d * %d\n",y , x, x);
	printf("%d = %d * %d",x ,y ,y );
}
