#include <stdio.h>
#include <stdlib.h>

int operasio(int command, int A, int B, int arr[])
{
        if (command == 1) {
            arr[0] = 3;
            arr[1] = B;
        }
        else if (command == 2) {
            arr[0] = A;
            arr[1] = 5;
        }
        else if (command == 3) {
            arr[0] = 0;
            arr[1] = B;
        }
        else if (command == 4) {
            arr[0] = A;
            arr[1] = 0;
        }
        else if (command == 5) {
            if (A+B <= 5) {
                arr[1] = A+B;
                arr[0] = 0;
            }
            else {
                arr[0] = A+B-5;
                arr[1] = 5;
            }
        }
        else {

            if (A+B <= 3) {
                arr[0] = A+B;
                arr[1] = 0;
            }
            else {
                arr[0] = 3;
                arr[1] = A+B-5;
            }
        }

}
int main()
{
    int command;
    int work;
    int A, B, arr[2];
    command = 0;
    work = 0;
    A = 0;
    B = 0;

    printf("Tugas 1 - Persoalan Bejana Air\n");
    printf("\n");
    printf("Terdapat 2 wadah, A dengan 3 L, dan B dengan 5 L");
    while (work == 0) {

        printf("\nGunakan perintah ini untuk memperoleh bejana yang terisi air sebanyak 4 L:\n");
        printf("1. Isi bejana A hingga penuh\n2. Isi bejana B hingga penuh\n3. Kosongkan bejana A\n4. Kosongkan bejana B\n5. Pindahkan muatan bejana A ke B hingga habis/penuh\n6. Pindahkan muatan bejana B ke A hingga habis/penuh\n");
        printf("Berikan angka perintah yang Anda hendaki: ");

        scanf("%d", &command);
        operasio(command, A, B, arr);
        A = arr[0];
        B = arr[1];

        if (arr[0] == 4 || arr[1] == 4) {
            work = 1;
            printf("Anda telah memperoleh bejana berisi 4 L air.");
            printf("\nBejana A: %d\nBejana B: %d", A, B);
            work = 1;
        }
        else {
            printf("\nBejana A: %d\nBejana B: %d", A, B);
            printf("\n");

        }

    }

    printf("\nAnda telah selesai...\n");
    printf("Christopher C. - 18320033\n");
    printf("\nMasukkan apapun untuk keluar: ");
    int ending;
    scanf("%d", ending);
    exit(0);
    return 0;
}
