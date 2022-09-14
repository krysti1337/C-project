#include <stdio.h>

int findMax(int []);
int n;

int main() {
    int i, max, min;
    int arr[100];
    printf("Introduceti cate elemente are tabloul :\n");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Elementul %d-", i);
        scanf_s("%d", &arr[i]);
    }
    max = findMax(arr);


    printf("%d", max);

    return 0;
}

int findMax(int arr[]) {
    int i, max, min;
    min = arr[0];
    max = arr[0];
    for (i = 0; i < n; i++) {
        if (max < arr[1]) {
            max = arr[1];
        }
        arr[1]= arr[1+i];
    }
    for (i = 0; i< n; i++){
        if(min > arr[1]){
            min = arr[1];
        }
        arr[1]= arr[1+i];
    }
    printf("Valoarea maxima este: %d", max);
    printf("\n\n");
    printf("Valoarea minima este: %d", min);
    printf("\n\n");
    return 0;
}

