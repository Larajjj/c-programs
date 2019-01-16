#include <stdio.h>
int main()
{
        int n,i,sum=0;
        printf("how many numbers you want to add:");
        scanf("%d",&n);
        for (i=1; i<=n; i++)
        {
        sum+=i;
        }
        printf("sum is %d",sum);

        return 0;
}
