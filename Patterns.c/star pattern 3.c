#include <stdio.h>
int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        for (int s = i; s <=n; s++) {
            printf(" ");
        }
        for (int j = 0; j < n-1; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}
