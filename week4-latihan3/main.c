#include <stdio.h>
#include <stdlib.h>

struct tabelNilai {
    int nim;
    char nama[80];
    float hadirs;
};
struct tabelNilai mhs[100] = {{18320033, "Christopher Chandra", 80.01}, {33002381, "Chandra Christopher", 79.99}};
/* contoh karena .csv belum ada */

/* read .csv file, kemudian simpan dalam array of structures */

int main()
{

    int aks;
    printf("Latihan 3 - Tugas 4, Database Kehadiran Kelas");
    printf("\n\nDaftar mahasiswa dengan kehadiran yang tidak memenuhi\n");

    for (int i = 0; i < 100; i++) {
        if (mhs[i].hadirs < 80 && mhs[i].hadirs != 0){
            printf("\nNIM: %d  Nama: %s  Kehadiran: %.2f\n", mhs[i].nim, mhs[i].nama, mhs[i].hadirs);
        }
    }

    scanf("%s", aks);
    return 0;
}
