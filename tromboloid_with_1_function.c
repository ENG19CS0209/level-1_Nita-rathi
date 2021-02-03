
#include <stdio.h>
int main()
{
float h,d,b;
float volume_of_tromboloid;
printf("enter the values of h,d,b:");
scanf("%f%f%f",&h,&d,&b); 
volume_of_tromboloid=(((h*d*b)+(d/b))/3);
printf("volume_of_tromboloid is %f ",volume_of_tromboloid);
}
