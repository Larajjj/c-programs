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


#include<stdio.h>

why # is used in the beginning?
  #include <stdio.h>
is a directive to the C preprocessor. Lines beginning with # are processed by the preprocessor before compilation.  
Page no.42
  
   It is from where preprocessor starts to process the code.
The C preprocessor executes before a program is compiled.

what is #include<stdio.h> ?
    It tells the preprocessor to include the contents of the standard input/output header ( <stdio.h> ) in the program.


what is int main?
     C programs contain one or more functions, one of which must be main . 
     Every program in C begins executing at the function main . 
     Functions can return information. 
     The keyword int to the left of main indicates that main “returns” an integer (whole-number) value.