#include <stdio.h>
int main()
{
int n,j;
printf("enter your number:");
scanf("%d",&n);
printf("enter no.");
scanf("%d",&j);
// for(int i=10;i>=1;i--){
//     int table;
//     table=n*i;
// printf("%d\n",table);
// }

while (j>0){
     int table;
    table=n*j;
printf("%d\n",table);
 j--;
}


}
