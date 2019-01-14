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
        if(a<b && a<c){
        d=a;
        }
        if(b<c && b<a){
        d=b;
        }
        if(c<a && c<b){
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

                if (a<b){
                if (a<c)
                return a;
                else return c;
        }
                else if (b<a){
                if(b<c)
                return b;
                else return c;
        }
                   
}
                                                              
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
int min(int a, int b, int c)
{
        int min=a;

        if (b<min)
        min=b;

        if (c<min)
        min=c;

        return min;
}
void output(int a, int b, int c, int d)
{
        printf("%d is smaller among %d,%d,%d", d,a,b,c);
}
int main()
{
        int w,x,y,z;
        input(&w,&x,&y);
        z=min(w,x,y);
        output(w,x,y,z);
}



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

int compare(int p, int q, int r)

{
        return (p<q ?(p<r ? p:r):(q<r ? q:r));
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



what is an array
how to initialise array using array literals
how to declare an array 
how to get the value of array element
how to declare the value of array element
how to return the value of array?
what is variable length array?
