#include <stdio.h>
int input(int*a, int*b, int*c)
{
        printf("enter a number\n");
        scanf("%d",a);
        printf("enter a number\n");
        scanf("%d",b);
        printf("enter a number\n");
        scanf("%d",c);
}
int compare(int a, int b, int c)
{
        int d;
        if(a<b & a<c){
        d=a;
        }
        if(b<c & b<a);{
        d=b;
        }
        if(c<a & c<b){
        d=c;
        }
        return d;
}
void output(int a, int b, int c, int d)
{
        printf("%d is smaller among %d,%d,%d", d,a,b,c);
}
int main()
{
        int w,x,y,z;
        input(&w,&x,&y);
        z=compare(w,x,y);
        output(w,x,y,z);
}


enter a number
6
enter a number
8
enter a number
2
2 is smaller among 6,8,2
