include <stdio.h>
int number()
{
        int n;
        printf("enter numbers to be added:");
        scanf("%d",&n);
        return n;
}
void input(int n,int add[n])
{
        int i;
        for(i=0;i<n;i++)
        {
                scanf("%d",&add[i]);
        }
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
        int num,sum=0;
        num=number();
        int add[num];
        input(num,add);
        sum=compute(num,add);
        output(sum);
}

