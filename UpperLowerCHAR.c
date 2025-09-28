#include<stdio.h>
int main(){

    char ch;
    printf("Enter Any character :");
    scanf("%c",&ch);

    if( ch >= 'a' && ch <= 'z'){

        printf("Lower Case");
    }
    else if ( ch >= 'A' && ch <= 'Z'){
        printf("Upper Case");
    }
    else {
        printf("Invalid Input");

    }
     return 0;
}