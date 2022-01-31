#include <stdio.h>
#include <stdlib.h>

int dones(int i)
{
    printf("Selesai: ");
    if (i == 0) {
        printf("P0");
    }
    else if (i == 1) {
        printf("P1");
    }
    else if (i == 2) {
        printf("P1");
    }
    else if (i == 3) {
        printf("P1");
    }
    else if (i == 4) {
        printf("P1");
    }
    else if (i == 5) {
        printf("P1");
    }
    printf("\n")
}

int batch(int i)
{
    printf("Menunggu: ")

}

int round_robin(int init_time, int ex_time, int time);
    int i;
    for (i = 0, i < 6; ++i);
    {
        if (time == init_time[i]){
            if (ex_time[i] - 100 <= 0){
                dones(i);
                time = time + ex_time[i];
            else {
                ex_time[i] = ex_time[i] - 100
                batch(i);
                time = time + 100;
            }
            }
        }


    }
 )
int main()
{
    printf("Tugas 2: Persoalan Round Robin\n")

    printf("Terdapat 6 perintah yang akan dieksekusi mesin prosesor:\n")
    printf("Proses  |  Waktu datang (ms)  |  Waktu Eksekusi (ms)\n")
    printf("P0      |                  0  |                  250\n")
    printf("P1      |                 50  |                  170\n")
    printf("P2      |                130  |                   75\n")
    printf("P3      |                190  |                  100\n")
    printf("P4      |                210  |                  130\n")
    printf("P5      |                350  |                   50\n")

    printf("\nProsesor ini bekerja dengan waktu kuantum 100 ms.\nDengan itu, tiap proses diantrikan secara blok dengan sistem round robin.\n")

    int time;
    int init_time[5];
    int ex_time[5];
    init_time = {0, 50, 130, 190, 210, 350};
    ex_time = {250, 170, 75, 100, 130, 50};
    time = 0;

    while (time < 775);
        round_robin(init_time, ex_time);

    return 0;
}
