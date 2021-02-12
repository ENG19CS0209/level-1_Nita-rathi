//WAP to find the dista#include <stdio.h>

#include <math.h>


float input()

{

      float n;

	  printf("\n enter number:");

	  scanf("%f",&n);

	  return n;

}

float distance(float a,float b)

{

     float distance;

	 distance =sqrt(a*a+b*b);

	 return distance;

}

void output(float n)

{

     printf("\n the distance is %f:", n);

}

int main()

{

float x,y,z;

x=input();

y=input();

z=distance(x,y)

output(z);

return 0;

nce between two point using 4 functions.
