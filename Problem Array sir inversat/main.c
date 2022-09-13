#include <stdio.h>

int main() {
    int i, n, a[100];

    printf("Introduceti cate elemente are sirul :\n");
    scanf_s("%d", &n);
    printf("Introduceti %d numere din elementele: \n", n);

    for (i = 0; i < n; i++) {
        printf("Elementul - %d ", i);
        scanf_s("%d : ", &a[i]);
    }
    printf("Sirul simplu: \n");
    printf("--------------------\n");
    for (i = 0; i < n; i++) {
        printf("% 5d", a[i]);
    }
    printf("\n");
    printf("Sirul inversat: \n");
    printf("--------------------\n");
    for (i = n - 1; i >= 0; i--) {
        printf("% 5d", a[i]);
    }
    return 0;
}
