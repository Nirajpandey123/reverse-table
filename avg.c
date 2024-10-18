#include<stdio.h>
int main ()
{
int num1,num2,num3 ;
printf("enter first number");
scanf("%d",&num1);
printf("enter your second number");
scanf("%d",&num2);
printf("enter your third number ");
scanf("%d",&num3);
float average = (num1+num2+num3) /3;
printf("your answer is %f",average);
}