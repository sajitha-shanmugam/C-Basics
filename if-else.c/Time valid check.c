#include<stdio.h>

int main(){
    int hour,min;
    printf("Enter Hour and Minutes:");
    scanf("%d:%d",&hour,&min);

    if(hour>=1 && hour<=23 && min>=0 && min<=59){
        printf("Valid Time");
    }else{
        printf("Not Valid");
    }
    return 0;
}