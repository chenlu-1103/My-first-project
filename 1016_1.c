#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	srand(time(NULL));
	int i;
	for(i=1;i<=10;i++)
	{
		int num = rand();
	
	    printf("%d\n", num);
	}

	return 0;
}
