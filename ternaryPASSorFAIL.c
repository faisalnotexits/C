#include<stdio.h>
int main(){

    int marks;
    printf("Enter Your Marks (0-100) :");
    scanf("%d",&marks);

    marks <= 30 ? printf("FAIL\n") : printf ("PASS");

    return 0;
}