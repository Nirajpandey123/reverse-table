#include <stdio.h>
int main (void)
{
int ch,a,b,c;
printf("enter you choice :\n 1 for addd \n 2 for subtraction \n 3 for multiply \n 4 division");
scanf("%d",&ch);
printf ("enter first number");
scanf("%d",&a);
printf ("enter second number");
scanf("%d",&b);
printf("enter third number");
scanf("%d",&c);
if (ch==1){
    int add = a+b+c;
    printf("answer is %d",add);
}
else if (ch==2){
    int subtract = a-b-c;
    printf("answer is %d",subtract);
}
else if (ch==3){
    int multiply = a*b*c;
    printf("answer is %d",multiply);
}
else if (ch==4){
    float division = (a/b)/c;
    printf("answer is %f ",division);
}
else {

    printf("invalid error ");
}


}