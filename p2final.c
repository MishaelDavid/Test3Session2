#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("Enter a fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
  }
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  Fraction  a,b,c;
  a = f1.num/f1.den;
  b = f2.num/f2.den;
  c = f3.num/f3.den;
  if(a<b && a<c)
    return a;
  else if (b<a && b<c)
    return b;
  else 
    return c;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{ Fraction a,b,c;
  if(largest==a)
    printf("Smallest fraction is %.0d/%.0d",f1.num/f1.den);
  else if (largest==b)
     printf("Smallest fraction is %.0d/%.0d",f2.num/f2.den);
  else 
     printf("Smallest fraction is %.0d/%.0d",f3.num/f3.den);
}
int main()
{
  
  Fraction f1,f2,f3;
  Fraction largest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  largest=Largest_fraction(f1,f2,f3);
  output(f1,f2,f3,largest);
  return 0;

  }