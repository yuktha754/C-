#include <stdio.h>

int main() {
    int n, i, j, k, l;
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (l = i - 1; l > 0; l--) {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}
