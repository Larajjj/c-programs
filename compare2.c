#include <stdio.h>
int input(int *a, int *b)
{
  printf("Enter a number\n");
  scanf("%d",a);
  printf("Enter a number\n");
  scanf("%d",b);
}
int compare(int a, int b)
{
   int c;
   if(a<b){
     c=a;
}
   else{
     c=b;
}
   return c;
}
void output(int a, int b, int c)
{
   printf("%d<%d is %d",a,b,c);
}
int main()
{
   int x,y,z;
   input(&x,&y);
   z=compare(x,y);
   output(x,y,z);
}











































 what are the different ways to debug a logical error?       
 1.Comparing with the existing program
     problem: strategy to learn a program not a learn programming.
	     
 2.Mental tracing 
     problem:If understanding is wrong, tracing goes wrong.

 3.printf
    problem: We cannot find the control flow.
 
 ddd-data display debugger
 
 debugging:
    
