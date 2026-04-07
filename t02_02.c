// 12S25019 - Gebriel Glen Marcel Pakpahan


#include <stdio.h>

int main(int _argv, char **_argc)
{
    int level;
    scanf("%d", &level);

    // Menampilkan menu secara kaskade ke bawah
    if (level >= 5) printf("milk\n");
    if (level >= 4) printf("fruits\n");
    if (level >= 3) printf("vegetables\n");
    if (level >= 2) printf("side dishes\n");
    if (level >= 1) printf("staple food\n");

    // Menampilkan kesimpulan
    if (level == 1) printf("you need side dishes\n");
    else if (level == 2) printf("you need vegetables\n");
    else if (level == 3) printf("good\n");
    else if (level == 4) printf("very good\n");
    else if (level == 5) printf("perfect\n");

    return 0;
}