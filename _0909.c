#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int c = 0;
	
	printf("请输入两个整数:\n");
	scanf("%d %d" ,&num1 ,&num2);
	
	int min = num1<num2 ? num1:num2;
	int max = num1>num2 ? num1:num2;
	for( min ;min <= max; min++)
	{
	    if(min%6 == 0 && min%8 == 0)
		{
		    c++;
		}
			
		    
	}
	printf("%d\n" ,c);
	
	return 0;
 } 
