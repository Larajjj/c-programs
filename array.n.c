
#include <stdio.h>
int input()
{
        int i,add[n],sum=0;
        printf("enter numbers to be added:");
        for(i=0;i<n;i++)
        {
                scanf("%d",&add[i]);
        }
        return add;
}
int compute(int n,add)
{
        for (i=0;i<n;i++)
        {
                sum=sum+add[i];
        }
        return sum;
}
void output(int sum)
{
        printf("%d is the sum of n different numbers",sum);
}
