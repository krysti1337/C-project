#include <stdio.h>

int digSum(int num);

int main() {
    int n, sum;

    printf("Introduceti orice numar doriti :");
    scanf_s("%d", &n);
    sum = digSum(n);

    printf("Suma cifrelor numarului %d = %d \n\n", n, sum);
    return 0;
}

int digSum(int n) {
    int a;
    if (n == 0)
        return 0;
    else
        return((n % 10) + digSum(n / 10)); //desparte numarul in cifre si le aduna

}