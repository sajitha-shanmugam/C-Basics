#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a1[n1];

    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int a2[n2];

    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }

    int result[n1 + n2];

    // Single loop to merge both
    for (int i = 0; i < n1 + n2; i++) {
        if (i < n1)
            result[i] = a1[i];
        else
            result[i] = a2[i - n1];
    }

    printf("Concatenated array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
