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

what is scanf ?
	Is is used to obtain a value from the user.This scanf has two arguments,
"%d" and &integer1 .
	
what is "%d" ?
	The %d conversion specifier indicates that the data should be
an integer (the letter d stands for “decimal integer”). The % in this context is treated by scanf
as a special character that begins a conversion specifier. Page no :60
	
what is a conversion specifier?
	A conversion specifier begins with a percent sign, and ends with one of the following 
output conversion characters .
	
what is "&" ?
	
	
	
	


 what are the different ways to debug a logical error?       
 1.Comparing with the existing program
     problem: strategy to learn a program not a learn programming.
	     
 2.Mental tracing 
    problem: If understanding is wrong, tracing goes wrong.

 3.printf
    problem: We cannot find the control flow.
 
 4.ddd-data display debugger
