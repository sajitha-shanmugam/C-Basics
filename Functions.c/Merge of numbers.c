#include<stdio.h>
#include<math.h>

int merge(int n){
    int count = 0;
    if(n==0){
        return 1;
    }
    while (n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}

int main(){
    int a,b;
    printf("Enter two numbers to concatenate: ");
    scanf("%d %d",&a,&b);
    int digits = merge(b);
    int p = a * pow(10,digits) + b;
    printf("Merged numbers: %d\n",p);
    return 0;
}