// Online C compiler to run C program online
#include <stdio.h>

int fact(int n){
    if(n==1){
        return 1; 
    }else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Factorial is %d",fact(n));
    return 0;
}