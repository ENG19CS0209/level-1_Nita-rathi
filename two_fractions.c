#include<stdio.h>

#include<math.h>

typedef struct

{

  int n;

  int d;


} Fraction;


Fraction

sum (Fraction f1, Fraction f2)

{

  Fraction result = { (f1.n * f2.d) + (f2.n * f1.d), f1.d * f2.d };

  return result;

}


Fraction

input (Fraction c, int a)

{

  printf ("Enter fraction %d: numerator and denominator:", a);

  scanf ("%d%d", &c.n, &c.d);

  return c;

};


void display(Fraction r){

  printf ("Result=%d/%d", r.n, r.d);

}

int

main ()

{

  Fraction f1 = input (f1, 1);

  Fraction f2 = input (f2, 2);

  Fraction r = sum (f1, f2);

  display(r);

  return 0; 

}


