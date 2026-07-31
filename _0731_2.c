#include <stdio.h>

int main(void)
{
	char name[20];
	int age;
	float height;
	float weight;
	float BMI;
	
	printf("Please enter your name: \n");
	scanf("%s", name); 
	printf("\n");
	
	printf("Please enter your age: \n");
	scanf("%d", &age);
	printf("\n");
	
	printf("Please enter your height(m): \n");
	scanf("%f", &height);
	printf("\n");
	
	printf("Please enter your weight(kg): \n");
	scanf("%f", &weight);
	printf("\n");
	
	BMI = weight/(height*height);
	printf("your BMI: %.2f", BMI);
	return 0;
}
