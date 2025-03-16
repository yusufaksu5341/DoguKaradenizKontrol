#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkCode(int kod, int *plakaKodlari, int size) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (plakaKodlari[i] == kod) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Doğu Karadeniz bölgesinde yer alır\n");
    } else {
        if (kod > 81 || kod < 1) {
            printf("Geçerli Bir Plaka Kodu Giriniz\n");
        } else {
            printf("Doğu Karadeniz bölgesinde yer almaz\n");
        }
    }
}

int main() {
    FILE *file;
    int kod;
    int plakaKodlari[100];
    int size = 0;

    file = fopen("trafik_kodlari.txt", "r");
    if (file == NULL) {
        printf("Dosya açılamadı\n");
        return 1;
    }

    while (fscanf(file, "%d", &plakaKodlari[size]) != EOF) {
        size++;
    }
    fclose(file);

    printf("Plaka Kodu Giriniz= ");
    scanf("%d", &kod);
    checkCode(kod, plakaKodlari, size);

    return 0;
}
