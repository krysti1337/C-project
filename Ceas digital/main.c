#include <stdio.h>
#include <stdlib.h>
#include <zconf.h>


int main() {
    int h, m, s;
    int d = 1;


    printf("Introduceti ora :");
    scanf_s("%d%d%d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60) {
        printf_s("Error!\n");
        exit(0);
    }
    while (1) {
        s++;
        if (s > 59) {
            m++;
            s = 0;
        }
        if (m > 59) {
            h++;
            m = 0;
        }
        if (h > 12) {
            h = 1;
        }
        printf_s("%02d:%02d:%02d", h, m, s);

        sleep(d);
        system("cls");
    }


}
