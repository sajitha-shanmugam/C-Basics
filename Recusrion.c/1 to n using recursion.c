#include <stdio.h>

int rec(int n){
    if(n==0){
        return 0;
    }else{
        rec(n-1);
        printf("%d ",n);
        return 1;
    }
}

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    rec(n);
    return 0;
}