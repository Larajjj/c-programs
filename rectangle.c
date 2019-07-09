#include<stdio.h>
#include<math.h>
struct v
{
        float x;
        float y;
};
struct rectangle
{
        struct v v[3];
        float l;
        float b;
        float a;
};
int input1()
{
        int n;
        printf("Ener the value of n:");
        scanf("%d",&n);
        return n;
}
void input2(int n,struct rectangle a[20])
{
        int i,j;
        for(i=0;i<n;i++)
        {
                for(j=0;j<3;j++)
                {
                        printf("Enter the x coordinate of v %d",j+1);
                        scanf("%f",&a[i].v[j].x);
                        printf("Enter the y coordinate of v %d",j+1);
                        scanf("%f",&a[i].v[j].y);
                        printf("%f,%f\n",a[i].v[j].x,a[i].v[j].y);
                }
        }
}
int main()
{
}

                                                                                                                            1,1           Top
