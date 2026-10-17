#include <stdio.h>

double getArea(double r)
{
	double area = r * 3.14;
	return area;
}

int main(void)
{
	double area1 = getArea(7.1);
	double area2 = getArea(9.9);
	
	if(area1 > area2)
	{
		printf("第一个面积大\n");
	 } 
	 else if(area1 <area2)
	 {
	 	printf("第二个面积大\n");
	 }
	 else
	 {
	 	printf("两者面积一样大\n");
	 }
	 
	 return 0;
}
