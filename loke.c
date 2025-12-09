#include <stdio.h>

int main() {
    char nama[50];
    int umur;

    printf("Masukkan nama Anda: ");
    scanf("%s", nama);

    printf("Masukkan umur Anda: ");
    scanf("%d", &umur);

    printf("\nHalo %s, umur Anda %d tahun!\n", nama, umur);

    return 0;
}
