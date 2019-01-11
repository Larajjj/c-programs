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
   printf("%d is smaller among %d and %d",c,a,b);
}
int main()
{
   int x,y,z;
   input(&x,&y);
   z=compare(x,y);
   output(x,y,z);
}


Enter a number
56
Enter a number
32
32 is smaller among 56 and 32nvidia@nvidia-OptiPlex-3050:~$ 
nvidia@nvidia-OptiPlex-3050:~$ ./a.out
Enter a number
32
Enter a number
56
32 is smaller among 32 and 56nvidia@nvidia-OptiPlex-3050:~$ 

what is a logical error?



















 what are the different ways to debug a logical error?       
 1.Comparing with the existing program
     problem: strategy to learn a program not a learn programming.
	     
 2.Mental tracing 
     problem:If understanding is wrong, tracing goes wrong.

 3.printf
    problem: We cannot find the control flow.
 
 ddd-data display debugger
 
 debugging:
    
