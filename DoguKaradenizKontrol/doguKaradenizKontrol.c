#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkCode(int kod) {
    switch (kod) {
        case 8:
        case 28:
        case 29:
        case 52:
        case 53:
        case 61:
        case 69:
            printf("Doğu Karadeniz bölgesinde yer alır\n");
            break;
        default:
            if (kod > 81 || kod < 1) {
                printf("Geçerli Bir Plaka Kodu giriniz\n");
            } else {
                printf("Doğu Karadeniz bölgesinde yer almaz\n");
            }
            break;
    }
}

int main() {
    int kod;

    printf("Plaka Kodu Giriniz= ");
    scanf("%d", &kod);
    checkCode(kod);

    return 0;
}