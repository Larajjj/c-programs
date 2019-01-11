#include <stdio.h>
void input (int*a,int*b)
{
        printf("Enter a");
        scanf("%d" ,a);
        printf("Enter b");
        scanf("%d" ,b);
}
int add (int a, int b)
{
        int c;
        c=a+b;
        return c;
}
void output (int a, int b, int c)
{
        printf("%d + %d is %d\n",a,b,c);
}
int main()
{
        int x,y,z;
        input(&x, &y);
        z=add(x,y);
        output(x,y,z);
}

what is "%d"?
	
	
	
	
	
	


 what are the different ways to debug a logical error?       
 1.Comparing with the existing program
     problem: strategy to learn a program not a learn programming.
	     
 2.Mental tracing 
    problem: If understanding is wrong, tracing goes wrong.

 3.printf
    problem: We cannot find the control flow.
 
 4.ddd-data display debugger
