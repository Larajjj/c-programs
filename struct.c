#include <stdio.h>
struct fraction {
   int numerator;
   int denominator;
};
void test (struct fraction *f)
{
   f->numerator = 10;
   f->denominator = 20;
   printf("numerator = %d, denominator = %d\n",f->numerator, (*f).denominator);
}

int main()
{
   struct fraction g= {1,2};
   test(&g);
   printf("numerator = %d, denominator = %d\n",g.numerator, g.denominator);

