#include<stdio.h>
int main(){

    int age;
    printf("Enter Your age :");
    scanf("%d", &age);

    age >= 18 ? printf("You are adult\n") : printf("You are not adult\n");


    return 0;
}