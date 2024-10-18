#include <stdio.h>
int main ()
{
char ch;
printf("enter your character:");
scanf("%d",&ch);
if(ch>='A'&& ch<='Z'){
    printf("uppercase");
}
else if (ch >= 'a'&& ch <= 'z'){
    printf("lower case");
}
else {
    printf("invalid ");
}


return 0;

}