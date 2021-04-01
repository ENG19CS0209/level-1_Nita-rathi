

#include <stdio.h>
#include <math.h>
struct fraction{
int num, den;
};
int gcd(int a, int b)
{
}
int main(){
struct fraction c1,c2,final_frac;
c1=get_fraction();
c2=get_fraction();
final_frac=add_fractions(c1,c2);
printf("\sum: %d / %d \n",final_frac.num,final_frac.den);
return 0;
}
