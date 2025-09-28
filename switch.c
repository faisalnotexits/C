#include<stdio.h>
int main(){

    int day; // 1-monday 2-tuesday 3-wednesday 4-thursday 5-friday 6-saturday 7-sunday
    printf("Enter Dat(1-7) :");
    scanf("%d",&day);

    switch (day){
        case 1 : printf("saturday\n");
                    break;
        case 2 : printf("sunday\n");
                    break;
        case 3 : printf("monday\n");
                    break;      
        case 4 : printf("tuesday\n");
                    break;
        case 5 : printf("wednesday\n");
                    break;  
        case 6 : printf("thursday\n");
                    break;
        case 7 : printf("friday\n");
                    break;
                    default : printf("not a valid date");

    }
    return 0;

}