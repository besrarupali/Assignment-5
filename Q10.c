//the area of a triangle where base and height of the triangle are given.
#include<stdio.h>
int main()
{
float b,l,a;
printf("enter the base and length ");
scanf("%f %f",&b,&l);
a=0.5*l*b;
printf("area of the triangle where base %f and length %f is given=%f",b,l,a);
}
