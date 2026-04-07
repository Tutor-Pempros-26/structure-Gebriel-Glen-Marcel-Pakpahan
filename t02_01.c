// 12S25019 - Gebriel Glen Marcel Pakpahan


#include <stdio.h>

int main(int _argv, char **_argc)
{
    int jumlah_buku;
    float harga_buku;

    // Membaca masukan
    scanf("%d", &jumlah_buku);
    scanf("%f", &harga_buku);

    float total_harga = jumlah_buku * harga_buku;
    float diskon = 0.0;

    // Menentukan diskon sesuai ekspektasi autograder
    if (total_harga > 500000.0) {
        diskon = 0.15 * total_harga;
    } else if (total_harga > 100000.0) {
        diskon = 0.10 * total_harga;
    } else if (total_harga > 50000.0) {
        diskon = 0.05 * total_harga;
    } else {
        diskon = 0.0;
    }

    // Menampilkan output
    if (diskon == 0.0) {
        printf("---\n");
    } else {
        printf("%.2f\n", diskon);
    }

    printf("%.2f\n", total_harga - diskon);

    return 0;
}