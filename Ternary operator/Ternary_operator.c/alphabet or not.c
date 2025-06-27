#include<stdio.h>

int main(){
    char a;
    scanf("%c",&a);

    ((a>=97 && a<=122) || (a>=65 && a<=90)) ? printf("Alphabet") : printf("Not an Alphabet");

    return 0;
}