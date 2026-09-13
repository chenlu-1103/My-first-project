#include <stdio.h>

	
	/*int i=1;
	int j;
	
	for(i ; i <= 5 ; i++)
	{
		for(j = i; j <= 5 ;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/
	
	/*
	int i=1;
	int j;
	
	for(i ; i <= 5; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/
	int main(void) 
{
    int i = 1;
    int j;
    int k; 

    for(i ; i <= 4; i++)
        {
            for(k = 1; k <= i - 1;k++)
			{
				printf(" ");
			 } 
			
			
			    for(j = i; j <= 4; j++)
                    {
                        printf("*");
                        if(j < 4) 
                        {
                        	printf(" ");
						}
                    
                    }
                        printf("\n");
        }

    return 0;
}
