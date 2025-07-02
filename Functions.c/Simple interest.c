#include<stdio.h>

void si(){
    int p,n,r;
    printf("Enter Principal,No of years,Rate of Interest: ");
    scanf("%d %d %d",&p,&n,&r);
    float i = (p*n*r)/100.00;
    float a = p+i;
    float d = a * 0.02;
    float final = a-d;
    printf("Interest: %.2f\n Amount: %.2f\n Discount: %.2f\n Final Amount: %.2f\n ",i,a,d,final);
}

int main(){
    si();
    return 0;
}