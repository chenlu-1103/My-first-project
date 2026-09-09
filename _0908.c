#include <stdio.h>

int main(void)
{
	/*
	int key;
	printf("请输入数字:\n");
	scanf("%d", &key);
	switch(key)
	{
		case 1:
			printf("机票查询\n");
			break;
		case 2:
			printf("机票预定\n");
			break;
		case 3:
			printf("机票改签\n");
			break;
		default:
			printf("退出服务\n");
			break;
	}
	*/
    int sum = 0;
 	int i;//旧编译器不准在for括号里定义变量？ 
	for(i = 1; i <=10000; i++)
	{
		sum = i + sum;
	}
		printf("%d\n" ,sum);
	/*
	int sum = 0; 
	int i;
	for(i = 1; i <=100 ; i++)
	{
		if(i % 2 == 0)
		{
			sum = i + sum;
		}
	}
	printf("%d\n", sum);
	*/
	
	
	
	
	
	
	
	return 0;
}
