#include<stdio.h>
int main(){

    int age;
    printf("Enter age :");
    scanf("%d",&age);
    if( age > 18) {
        printf("You are adult\n");
        printf("you can vote\n");
        printf("you can drive\n");

    }
    else {
        printf("You Are not Adult\n");
        printf("you can not do adult things\n");

    }

    printf("Thank You");

    return 0;

}
