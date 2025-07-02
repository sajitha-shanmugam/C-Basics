#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
