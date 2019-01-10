#include<stdio.h>
int input(void)
{
     int a;
     printf("Enter a number\n");
     scanf("%d",&a);
     return a;
}
int compute(int x)
{
     x = x+1;
     return x;
}
void output(int m, int n)
{
     printf("%d +1 is %d",m,n);
}
int main(void)
{
     int a=input();
     int b=compute(a);
     output(a,b);
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
