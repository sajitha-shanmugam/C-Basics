#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    (n==0) ? printf("Number is Zero"): 
    (n>0) ? printf("Number is Positive") : printf("Number is Negative");

    return 0;
}