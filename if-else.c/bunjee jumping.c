/* Conditions:
         1. age need to be above 12.
         2. weight must between 40 kg and below 110 kg.
         3. if the weigth exceeds 110 they need to add more rope. */

#include<stdio.h>

int main(){
    int age,weight;
    printf("Enter your age and weight: ");
    scanf("%d%d",&age,&weight);

    if(age>=12){
        if(weight>=40 && weight<=110){
            printf("You can Jump");
        }else{
            printf("You can't jump");
        }
    }
    return 0;
}