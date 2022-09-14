#include <stdio.h>
#define MAX 100
int MaxElement(int []);
int n;
int main() {
    int i, arr[MAX], max;
    printf("Introduceti cate elemente are tabloul :\n");
    scanf_s("%d", &n);

    printf("Introduceti %d elemnte : \n",n);
    for(i = 0; i <n ; i++){
        printf(" Elementul %d - ", i );
        scanf_s("%d", &arr[i]);
    }
    max = MaxElement(arr);
    printf( max);
    return 0;
}

int MaxElement(int arr[50]){
    int i;
    for (i= 0; i< n ;i++){
        if(arr[0]<arr[i]){
            arr[0]= arr[i];
        }
    }
    printf("Cel mai mare numar este %d ", arr[0]);
    return 0;
}