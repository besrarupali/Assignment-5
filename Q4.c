//simple interest
#include<stdio.h>
int main()
{
float p,r,t,si;

scanf("%f %f %f",&p,&r,&t);
si=(p*r*t)/100;
printf("principal=%f rate of interest=%f time=%f simple interest=%f",p,r,t,si);
}
