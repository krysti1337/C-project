#include <stdio.h>
#include <stdlib.h>

int main() {
    char str [100];
    FILE * fptr;
    char fname[20] = "test.txt";
    printf("Crearea unui file 'file.txt' si introducerea textului in el : \n");

    fptr = fopen(fname,"w");
    if(fptr == NULL){
        printf("Eroare file nu a fost facut \n");
        exit(1);
    }
    printf("Introduceti o propozitie pentru fisier \n");
    fgets(str, sizeof str, stdin);
    fprintf(fptr, "%s", str);
    fclose(fptr);
    printf("\n Fisierul a fost creat cu succes \n", fname);
    return 0;
}
