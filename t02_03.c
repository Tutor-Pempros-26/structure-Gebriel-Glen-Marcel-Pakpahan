// 12S25019 - Gebriel Glen Marcel Pakpahan
// NIM - Name

#include <stdio.h>

int main(int _argv, char **_argc)
{
    char op;
    scanf(" %c", &op);

    // Inisialisasi awal nilai operasi
    int acc = 0;
    if (op == '*') {
        acc = 1;
    }

    // Sesuai README, program menerima batas maksimal operasi 4 masukan beruntun
    for (int i = 0; i < 4; i++) {
        int val;
        
        // Membaca bilangan yang akan dioperasikan
        if (scanf("%d", &val) != 1) {
            break;
        }
        
        // Aturan berhenti apabila input adalah -1
        if (val == -1) {
            printf("0\n");
            break;
        }

        // Kalkulasi berdasarkan operator
        if (op == '+') {
            acc += val;
        } else if (op == '-') {
            acc -= val;
            // Evaluasi absolut/selisih mutlak
            if (acc < 0) {
                acc = -acc; 
            }
        } else if (op == '*') {
            acc *= val;
        }

        // Mencetak hasil setiap langkah operasi
        printf("%d\n", acc);
    }

    return 0;
}