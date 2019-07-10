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
void input2(int n,struct rectangle a[])
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
float distance(float x1,float x2,float y1,float y2)
{
        float d;
        d=sqrt((x2-x1)*(x2-x1)-(y2-y1)*(y2-y1));
        return d;
}
void compute1(int n, struct rectangle a[])
{
        int i;
        for(i=0;i<n;i++)
        {
                int j=0;
                a[i].l=distance(a[i].v[j].x,a[i].v[j+1].x,a[i].v[j].y,a[i].v[j+1].y);
                a[i].b=distance(a[i].v[j+1].x,a[i].v[j+2].x,a[i].v[j+1].y,a[i].v[j+2].y);
        }
}
void compute2(int n,struct rectangle a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("l=%f,b=%f",a[i].l,a[i].b);
        a[i].a=a[i].l*a[i].b;
    }
}
void output(int n,struct rectangle a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("area of %d rectangle is %f",i+1,a[i].a);
    }
}

int main()
{
}

