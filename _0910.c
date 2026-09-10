#include <stdio.h>

int main(void)
{
	//int a=0;
    /*
		for(a;a<=100;a++)
	{
		printf("%d\n" ,a);
	}
	*/
	
/*	while(a<=100)
	{
		printf("%d\n" ,a);
		a++;
	}
*/

//题目一
   /*答案不好 
    int num;
    printf("请输入一个整数:\n");
    scanf("%d" , &num);
    if(num%2==0)
    {
    	printf("yes\n");
	}
	else
	{
		printf("no\n");
	 } 
	*/
	/*
	int n;
	printf("请输入整数:\n"); 
	scanf("%d" ,&n); 
    
    while(n>1 && n%2==0)
    {
    	n = n / 2;
    	
	}
	if(n==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	*/
	//题目二，折纸次数问题 
	
	/*
	int count=0;
	long int high=8844430;
	float a=0.1f;
	while(a<=high)
	{
		a = a*2;
		count++;
	}
	printf("需要折%d次" , count);
	*/
	//题目三
	int number = 123;
	int rev = 0;
	
	while(number !=0)
	{
		int temp = number%10;
		number = number/10;
		rev = rev*10+temp;
	}
	//这个循环有点难理解 ，不过还好 
	printf("%d\n", rev);
	 


	return 0;
}
