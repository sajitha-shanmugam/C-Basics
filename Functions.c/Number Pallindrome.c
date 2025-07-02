#include<stdio.h>

void pallindrome(int n){
    int temp = n;
    int reverse = 0;
    while(n>0){
        reverse = reverse * 10+(n%10);
        n/=10;
    }
    if(reverse==temp){
        printf("It's a Pallindrome!");
    }
    else{
        printf("It's not a pallindrome");
    }
}

int main(){
    int num;
    printf("Enter sequence of number to check pallindrome: ");
    scanf("%d",&num);
    pallindrome(num);
    return 0;
}