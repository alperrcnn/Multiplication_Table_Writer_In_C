#include <stdio.h>

int main() {
    int i, j, n;

    // Input from user
    printf("Up to which number would you like to see the multiplication table? ");
    scanf("%d", &n);

    // Headline
    printf("    ");
    for (i = 1; i <= n; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // The bar to seperate
    printf("    ");
    for (i = 1; i <= n; i++) {
        printf("----");
    }
    printf("\n");

    // Multiplication table
    for (i = 1; i <= n; i++) {
        printf("%2d |", i);
        for (j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
