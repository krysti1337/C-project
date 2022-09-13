#include <stdio.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-comparison"

int main() {
    int i, j, ctr, n, k;
    int a[50];

    printf("Introduceti cate numere sun in sir :\n");
    scanf_s("%d", &n);
    printf("Introduceti %d elemente\n", n);

    for (i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf_s("%d", &a[i]);
    }
    printf("Sirul este: \n");
    for (i = 0; i < n; i++) {
        printf("% 4d", a[i]);
    }
    printf("\n");
    printf("Numerele care nu sunt pereche :\n");
    for (i = 0; i < n; i++) {
        ctr = 0;
        for (j = 0, k = n; j < k + 1; j++) {
            if (i != j) {
                if (a[i] == a[j]) {
                    ctr++;
                }

            }
        }
        if (ctr == 0) {
            printf("% 2d", a[i]);
        }
    }


    return 0;
}

#pragma clang diagnostic pop