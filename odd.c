#include <stdio.h>
int main(void)
{
int n;
printf("enter your number :");
scanf("%d",&n);
int fact = 1;
for (int i=1;i<=n;i++ ){
fact = fact*i;
}
printf("factorial is :%d",fact);
}
 