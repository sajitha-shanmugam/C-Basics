#include<stdio.h>

int divisor(int a){
    int sum = 0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    int s1 = divisor(num1);
    int s2 = divisor(num2);
    if(s1/num1 == s2/num2){
        printf("The numbers %d and %d are friendly pair",num1,num2);
    }
    else{
        printf("The numbers %d and %d are not friendly pair",num1,num2);
    }
    return 0;
}