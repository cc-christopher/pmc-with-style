#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const unsigned int pdf[4] = {37, 80, 68, 70, 45};
    const unsigned int jpg1[3] = {255, 216, 255, 219};
    const unsigned int jpg1[3] = {255, 216, 255, 224};
    const unsigned int jpg1[3] = {255, 216, 255, 225};

    unsigned char span[5];
    FILE *track;
    char name[100] = "";
    char asks;

    printf("Tugas 3 - Identifikasi Ciri Fail dari Hex Dump\nLetakkan fail dalam folder yang sama dengan program dan masukkan nama beserta ekstensinya di bawah.\n");
    scanf("%s",&name);
    track = fopen(name, "rb");
        if(track == NULL) {
            printf("\n%s\" Fail tidak ditemukan", name);
            getch();
            exit(1);
        }
        else {
            fread(span, sizeof(span), 1, track);
            for (int j = 0; j < 5; j++) {
                printf("%u ", span[j]);


            }
            scanf("%s", &asks);

        }
    return 0;
}
