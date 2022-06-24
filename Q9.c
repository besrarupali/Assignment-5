//calculate the profit percentage upon selling a product. Cost price and selling price are given by the user.
#include<stdio.h>
int main()
{
float SP,CP,Pro,Per_Pro;
printf("enter the selling price and cost price ");
scanf("%f %f",&SP,&CP);
Pro=SP-CP;
Per_Pro=(Pro/CP)*100;
printf("selling price=%f \n cost price=%f \n profit=%f \n percentage profit=%f",SP,CP,Pro,Per_Pro);
}
