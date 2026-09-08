/*#include <stdio.h>
void butler(void);

int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");
	
	return 0;
}
void butler(void)
{
	printf("You rang, sir?\n");
}*/
   // How can I call a self-defined function?

#include <stdio.h>
void one_three(void);
void two(void);

int main(void)
{
	printf("starting now: \n");
	one_three();
	printf("done!\n");
	
	return 0;
	
}
void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}
void two(void)
{
	printf("two\n");
}
