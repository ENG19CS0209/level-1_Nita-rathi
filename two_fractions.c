#include<stdio.h>
#include <math.h>
typedef struct {
int n;
int d;
}fraction;
fraction sum (fraction f1, fraction f2)
{
fraction r={ (f1.n * f2.d) + (f2.n * f1.d), f1.d * f2.d };
return r;
}
fraction input()
{
printf ("Enter fraction %d: numerator and denominator:", a);
  scanf ("%d%d", &c.n, &c.d);
  return c;
};
void display()
{
printf("result =%d/%d",r.n,r.d);
}
int main (){
fraction f1= input (f1,1);
fraction f2 = input (f2,2);
fraction r = sum (f1,f2);
display(r);
return 0;
}

