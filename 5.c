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
