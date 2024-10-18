#include <stdio.h>
int main(void){
int marks;
printf("enter your grades=");
scanf("%d",&marks);
if(marks>=30 && marks<=50){
    printf("your grade is c");
}
else if (marks>=50&&marks<=70){
    printf("your grade is b");

}
else if (marks>=70 && marks<=90){
    printf("your grade is A");
}
else if (marks >=90&&marks<=100){
    printf("excellent !");
}
else if (marks<30){
    printf("sorry you are fail");
}
else {
    printf("invalid error");
}


}