#include<stdio.h>
int main (void)
{
int choice,num1,num2,ans;
printf("1:addition\n2:subtraction\n3:multiply\n4:division:");
scanf("%d",&choice);
switch(choice){
case 1 :printf("enter two number:");
scanf("%d",&num1);
printf("enter second number:");
scanf("%d",&num2);
ans=num1+num2;
printf("your answer is%d",ans);
break;
case 2 :printf("enter first number:");
scanf("%d",&num1);
printf("enter second number:");
scanf("%d",&num2);
ans=num1-num2;
printf("your answer is:%d",ans);
break;
case 3 :printf("enter first number:");
scanf("%d",&num1);
printf("enter second number:");
scanf("%d",&num2);
ans=num1*num2;
printf("your answer is: %d",ans);
break;
case 4 :printf("enter first number:");
scanf("%d",&num1);
printf("enter second number :");
scanf("%d",&num2);
ans=num1/num2;
printf("your answer is :%f",ans);
break;
default:printf("invalid");



}







}