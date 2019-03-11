#include <stdio.h>
void input()
{
        int n;
        int i,add[n];
        printf("enter numbers to be added:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&add[i]);
        }
}
int compute(int n,add[n])
{
        int i,sum=0;
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
int main()
{
        int q,n,s,add[q];
        input(&n,&add[q]);
        s=compute(n,add[q]);
        output(s);
}
