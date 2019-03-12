#include <stdio.h>
int input()
{
        int n;
        printf("enter numbers to be added:");
        scanf("%d",&n);
        int i,add[n];
        printf("enter no to be added:");
        for(i=0;i<n;i++)
        {
                scanf("%d",&add[i]);
        }
        return n;
}
int compute(int n,int add[n])
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
        int n;
        n=input();
        int add[n],s=0;
        s=compute(n,add);
      }
