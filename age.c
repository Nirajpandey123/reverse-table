#include<stdio.h>
int main (void)
{
int age;
printf("enter your age:");
scanf("%d",&age);
if(age>=18){
    printf("=you are adult");
    printf("\n you can drive");
    printf("\n you can vote");

}

else if (age<18)
{
    printf("you are not adult");

}

else {
    printf("invalid ");
}


}