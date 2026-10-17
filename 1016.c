#include <stdio.h>
#include <math.h>

int main(void)
{
	double res1 = pow(2, 3);
	printf("%lf\n", res1);
	
	double res2 = sqrt(8);
	printf("%lf\n", res2);
	
	double res3 = ceil(13.3);
	printf("%lf\n", res3);
	
	double res4 = floor(9.9);
	printf("%lf\n", res4);
	
	int res5 = abs(-15);
	printf("%d\n", res5);
	
	long res6 = labs(-26667773677);
	long long res7 = llabs(-83874924872645234);
	double res8 = fabs(-234.33);
	printf("%ld %lld %lf ",res6, res7, res8);
	
	return 0;
}
