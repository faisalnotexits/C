#include <stdio.h>
int main (){

   int a , b ; // a>b
   printf("Enter Dividend : ");
   scanf("%d",&a);
   printf("Enter Divisior : ");
   scanf("%d",&b);
   int q = a/b;
   int r = a - b*q;
   printf("The Reminder when %d is divided by %d is : %d",a,b,r);


    return 0;
}
