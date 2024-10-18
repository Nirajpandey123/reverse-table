#include <stdio.h>

int main() {
    int num1, num2,num3, max;
    printf("enter number 1:");
    scanf("%d",&num1);
    printf("enter number 2:");
    scanf("%d",&num2);
    printf("enter number 3:");
    scanf("%d",&num3);
    if (num1>num2){
        max=num1;}
     else if(num2>num3) {
        max=num2;
     }
      else if(num3>num2){
      max=num3;}
      if(num1>num3){
        max=num1;
      }
     else if(num3>num1){
        max=num3;
      }
    
else{
    printf("invalid");
}
    printf("the maximum number is %d",max);
    return 0;
}