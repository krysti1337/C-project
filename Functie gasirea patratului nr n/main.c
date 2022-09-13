#include <stdio.h>
double patrat(double num){
    return (num*num);
}

int main() {

    int num;
    double n;
    printf("Gasirea patratului numarului n \n");
    printf("Introduceti orice numar pentru aflarea patratului: \n");
    scanf_s("%d", &num);
    n = patrat(num);
    printf("Patratulu numarului %d este: %.2f\n", num, n);

    return 0;
}
