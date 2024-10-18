#include <stdio.h>
int main (void)
{
int n ;
printf("enter your number :");
scanf("%d",&n);
int sum=0;
for(int i =1;i<=n;i++)
{
    sum=sum+i;
}
printf("your sum is %d",sum);

}