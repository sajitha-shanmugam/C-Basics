#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
