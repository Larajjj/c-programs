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
    
what is call by value?
     If we change the parameters in the called function, it will not change in the calling function.
     
what is call by reference?
     If we change the parameters in the called function, it will change in the calling funtion.

what is int main (void)?
     Void indicates main does not receive any information.
     No parameters are passed.
     
what is void in "void output"?
     void output indicates output does not return any values.
    
What are local variables ?
     They are declared inside a function and can be used only inside that function.
     
What are global variables ?
     They are declared outside any function and can be accessed on any funtion inside the program.
     
what is printf?
     it instructs the computer to perform an action.
     it is used to write the set of characters into the file.
