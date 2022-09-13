#include <stdio.h>

int main() {

    int a1[50], a2[50], a3[50];
    int s1, s2, s3;
    int i, j, k;

    printf("Introduceti cate elemente in primul sir: \n");
    scanf_s("%d", &s1);
    printf("Introduceti %d elemente in array1: \n", s1);

    for (i = 0; i < s1; i++) {
        printf("Elementul %d: ", i);
        scanf_s("%d", &a1[i]);
    }
    printf("\n");
    printf("Sirul a1 este: \n");
    for (i = 0; i < s1; i++) {
        printf("% 2d", a1[i]);
    }
    printf("\n");

    printf("Introduceti cate elemente al doilea sir: \n");
    scanf_s("%d", &s2);
    printf("Introduceti %d elemente in array2:", s2);
    printf("\n");

    for (i = 0; i < s2; i++) {
        printf("Elementul %d:", i);
        scanf_s("%d", &a2[i]);
    }
    printf("\n");
    printf("Sirul ar2 este: \n");
    for (i = 0; i < s2; ++i) {
        printf("% 2d", a2[i]);
    }
    printf("\n");
    s3 = s1 + s2;

    for (i = 0; i < s1; i++) {
        a3[i] = a1[i];
    }
    for (j = 0; j < s2; j++) {
        a3[i] = a2[j];
        i++;
    }

    for(i = 0; i<s3; i++){
        for(k =0; k<s3-1; k++){
            if(a3[k]<=a3[k+1]){
                j = a3[k+1];
                a3[k+1]= a3[k];
                a3[k] = j;
            }
        }
    }

    for(i=0; i<s3;i++){
        printf("% 2d", a3[i]);
    }
    printf("\n\n");
    return 0;
}
