#include <stdio.h>

int main(void)
{
	int hour1, minute1;
	int hour2, minute2;
	
	printf("Enter hours and minutes on the next line,separated by a space,press Enter,again step\n");
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t =t1-t2;
	printf("the time difference is %d hour %d minute.", t/60 ,t%60);
	
	return 0;
	
}
