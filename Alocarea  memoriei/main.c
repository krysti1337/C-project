
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0;

    printf("Introduceti numarul de caractere : \n");
    scanf_s("%d", &n);

    ptr = (int *) malloc(n * sizeof(ptr));

    if (ptr == NULL) {
        printf("Alocarea memorie nu sa putut executa!\n");
        exit(0);
    }

    for (i = 0; i < n; i++) {
        printf("Numarul %d\n", i);
        scanf_s("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);

    free(ptr);
    return 0;
}


