#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;
    for(i=1; i<=4; i++)
        {
            for(k=1;k<=i-1;k++)
                {
                    printf(" ");
                }
                            for(j=i; j<=4; j++)
                {
                    printf("*");
                    if(j<4)
                    {
                        printf(" ");
                    }
                }
            printf("\n");
        }
    return 0;
}
