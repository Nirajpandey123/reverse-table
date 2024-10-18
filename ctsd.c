#include <stdio.h>

int main(void) {
    int n ;
    do{ 
   printf("\nenter your number :");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n %  7 == 0){
        break;
    }

    }while(1);
    printf("number is multiple of 7");
}