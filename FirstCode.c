#include <stdio.h>
int main(){
    int n, sum = 0;
   
    for(int i = 1; i <= 2; i++){
        scanf("%d", &n);
        sum = sum +n;
    }
    printf("%d", sum);
    return 0;

}