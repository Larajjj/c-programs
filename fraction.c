#include <stdio.h>
struct fraction
{
        int numerator;
        int denominator;
};
void input(struct fraction *f,struct fraction *g)
{
        printf("enter num 1:");
        scanf("%d",&f->numerator);
        printf("enter num 2:");
        scanf("%d",&g->numerator);
        printf("enter den 1:");
        scanf("%d",&f->denominator);
        printf("enter den 2:");
        scanf("%d",&g->denominator);
}
struct fraction add_fraction(struct fraction f,struct fraction g)
{
        struct fraction h;
        h.numerator=(f.numerator*g.denominator+g.numerator*f.denominator);
        h.denominator=f.denominator*g.denominator;
        return h;
}
void output(struct fraction h)
{
        printf("%d/%d is the sum",h.numerator,h.denominator);
}
int main()
{
        struct fraction a,b,c;
        input(&a,&b);
        c=add_fraction(a,b);
        output(c);
}
