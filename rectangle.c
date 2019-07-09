#include<stdio.h>
#include<math.h>
struct v
{
        float x;
        float y;
};
struct_rectangle
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
