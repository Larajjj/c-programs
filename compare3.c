#include <stdio.h>
int input(int*a, int*b, int*c)
{
        printf("enter a number\n");
        scanf("%d",a);
        printf("enter a number\n");
        scanf("%d",b);
        printf("enter a number\n");
        scanf("%d",c);
}
int compare(int a, int b, int c)
{
        int d;
        if(a<b<c){
          d=a=b;
}
        else{
          d=b=c;
}
        return d;
}
void output(int a, int b, int c, int d)
{
        printf("%d is smaller among %d,%d and %d", d,a,b,c);
}
int main()
{
        int w,x,y,z;
        input(&w,&x,&y);
        z=compare(w,x,y);
        output(w,x,y,z);
}


33.c: In function ‘output’:
33.c:24:9: warning: missing terminating " character
  printf("%d is smaller among %d,%d and %d, d,a,b,c);
         ^
33.c:24:9: error: missing terminating " character
  printf("%d is smaller among %d,%d and %d, d,a,b,c);
         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
33.c:25:1: error: expected expression before ‘}’ token
 }
 ^
33.c:25:1: error: expected ‘;’ before ‘}’ token


enter a number
2
enter a number
3
enter a number
4
3 is smaller among 2,3 and 4nvidia@nvidia-OptiPlex-3050:~$ vim 33.c


#include <stdio.h>
int input(int*a, int*b, int*c)
{
        printf("enter a number\n");
        scanf("%d",a);
        printf("enter a number\n");
        scanf("%d",b);
        printf("enter a number\n");
        scanf("%d",c);
}
int compare(int a, int b, int c)
{
        int d;
        if(a<b and a<c){
          d=a;
        }
        if(b<c and b<a){
          d=b;
        }
        if(c<a and c<b){
          d=c;
        }













33.c: In function ‘compare’:
33.c:14:9: error: expected ‘)’ before ‘and’
  if(a<b and a<c){
         ^~~
33.c:17:9: error: expected ‘)’ before ‘and’
  if(b<c and b<a){
         ^~~
33.c:20:9: error: expected ‘)’ before ‘and’
  if(c<a and c<b){
         ^~~
