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


222.c: In function ‘output’:
222.c:18:1: error: expected ‘;’ before ‘}’ token
 }
 ^
222.c: In function ‘main’:
222.c:22:15: warning: passing argument 1 of ‘input’ makes pointer from integer without a cast [-Wint-conversion]
         input(x, y);
               ^
222.c:2:6: note: expected ‘int *’ but argument is of type ‘int’
 void input (int*a,int*b)
      ^~~~~
222.c:22:18: warning: passing argument 2 of ‘input’ makes pointer from integer without a cast [-Wint-conversion]
         input(x, y);
                  ^
222.c:2:6: note: expected ‘int *’ but argument is of type ‘int’
 void input (int*a,int*b)
      ^~~~~

Enter a23
Enter b12
23 + 12 is 35





what is scanf ?
	Is is used to obtain a value from the user.This scanf has two arguments,
"%d" and &integer1 .
	
what is "%d" ?
	The %d conversion specifier indicates that the data should be
an integer (the letter d stands for “decimal integer”). The % in this context is treated by scanf
as a special character that begins a conversion specifier. 
	Page no :60
	
what is a conversion specifier?
	A conversion specifier begins with a percent sign, and ends with one of the following 
output conversion characters .
	
what is "&" ?
	ampersand ( & )—called
the address operator in C—followed by a variable name. The ampersand, when combined with
a variable name, tells scanf the location in memory at which the variable is located. The com-
puter then stores the value for the variable at that location.
	Page no : 60
		
what is a calling function?
	Calling function means, the defined function has to be called from some place. In simply C,
it is main() function from where function could be called.
	
what is actual parameter?
	actual value passed.
 Ex - a and b
	
what is formal parameter?
	variables
example: num 1 and num 2
