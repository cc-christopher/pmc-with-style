#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const unsigned int pdf[4] = {37, 80, 68, 70, 45};
    const unsigned int jpg1[3] = {255, 216, 255, 219};
    const unsigned int jpg2[3] = {255, 216, 255, 224};
    const unsigned int jpg3[3] = {255, 216, 255, 225};
    int pdfTrue;
    int jpg1True;
    int jpg2True;
    int jpg3True;


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
            printf("\n");
            for (int k = 0; k < 3; k++) {
                if ( span[k] == pdf[k] ) {
                    pdfTrue = 1 && pdfTrue;
                    jpg1True, jpg2True, jpg3True = 0;
                }
                else if ( span[k] == jpg1[k] ) {
                    jpg1True = 1 && jpg1True;
                    pdfTrue, jpg2True, jpg3True = 0;
                }
                else if ( span[k] == jpg2[k] ) {
                    jpg2True = 1 && jpg2True;
                    jpg1True, pdfTrue, jpg3True = 0;
                }
                else if ( span[k] == jpg3[k] ) {
                    jpg3True = 1 && jpg3True;
                    jpg1True, jpg2True, pdfTrue = 0;
                }
                else {
                    pdfTrue, jpg1True, jpg2True, jpg3True = 0;
                }
            }
            if (pdfTrue == 1) {
                printf("Fail adalah .pdf");

            }
            else if (jpg1True || jpg2True || jpg3True == 1) {
                printf("Fail adalah .jpg");

            }
            else {
                printf("Fail bukan .pdf dan bukan .jpg");
            }

            scanf("%s", &asks);

        }
    return 0;
}
