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
   printf("%d is smaller among %d and %d",a,c,b);
}
int main()
{
   int x,y,z;
   input(&x,&y);
   z=compare(x,y);
   output(x,y,z);
}



(gdb) file /home/nvidia/a.out
Reading symbols from /home/nvidia/a.out...done.
(gdb) core /home/nvidia/.ddd/sessions/compare.c/dddcore
[New LWP 3576]
Core was generated by `/home/nvidia/a.out'.
Program terminated with signal SIGABRT, Aborted.
#0  output (a=56, b=90, c=56) at 5.c:22
(gdb) Quit



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
     c=b;
}
   else{
     c=a;
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
23
Enter a number
36
36 is smaller among 23 and 36nvidia@nvidia-OptiPlex-3050:~$ 




what is a logical error?
	A logic error (or logical error) is a 'bug' or mistake in a program's 
source code that results in incorrect or unexpected behaviour. It is a type of runtime
error that may simply produce the wrong output or may cause a program to crash while running. 
Many different types of programming mistakes can cause logic errors.
	A logic error (or logical error) is a mistake in a program's source code that
results in incorrect or unexpected behavior.
Many different types of programming mistakes can cause logic errors.
	


 what are the different ways to debug a logical error?       
 1.Comparing with the existing program
     problem: strategy to learn a program not a learn programming.
	     
 2.Mental tracing 
     problem:If understanding is wrong, tracing goes wrong.

 3.printf
    problem: We cannot find the control flow.
 
 4.ddd-data display debugger
 
 
 Debugging:

	Writing code is only the beginning of completing a programming project. 
After the original implementation is complete, it is time to test the program. Unfortunately, 
only the rare (and usually non-priority) code project is completed without a single bug. 
Hence, debugging takes on great importance: the earlier you find an error, the less it will cost.
A major bug found before distribution is much, much cheaper to fix than a major bug found by thousands of your users.

	A debugger allows you, the programmer, to interact and inspect the running program, making it possible to 
trace the flow of execution and track down the problems. 
