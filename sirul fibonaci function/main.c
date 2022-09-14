#include <stdio.h>

int fibonacci(int t1, int t2);

int n;

int main() {
    static int t1 = 0, t2 = 1;
    printf("Introduceti numarul de termeni : ");
    scanf_s("%d", &n);

    fibonacci(t1,t2);
    return 0;
}

int fibonacci(int t1, int t2) {
    static int i;
    int nxtTerm;

    if (i == n)
    return 0;
    else{
         nxtTerm = t1+ t2;
         t1 = t2;
         t2 = nxtTerm;

        printf("% 3d", nxtTerm);
    i++;
        fibonacci(t1,t2);
    }

    /* for (i = 0; i < n; i++) {
        printf("%d", nxtTerm);
        nxtTerm = t1 + t2;
        t1 = t2;
        t2 = nxtTerm;
        printf("%d", nxtTerm);
        fibonacci(t1, t2);
    } */
}
