#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void noiHoVaTen(char ho[], char ten[]) {
//    printf("Do dai cua ho la: %d\n", strlen(ho));
//    printf("Do dai cua ten la: %d\n", strlen(ten));
//    int dodaiHo = strlen(ho);
//    int dodaiTen = strlen(ten);
//    int tong = dodaiHo + dodaiTen;
//    printf("Do dai cua ca ho va ten la %d\n", tong);
//    tong++;
//    char hovaten[tong];
    strcat(ho, " ");
    printf(strcat(ho, ten));

//    strcat(hovaten, ten);
//    printf("%s", hovaten);
}

int main() {
    char ho[25], ten[25];
    while (1 == 1) {
        printf(" vui long chi nhap duoi 25 ki tu\n");
        printf("Vui long nhap ho cua ban: ");
        gets(ho);
        if (
                strlen(ho) > 25) {
            printf(" qua 25 ki tu vui long nhap lai:\n");
        } else break;
    }
    while (1 == 1) {
        printf("Vui long nhap ten cua ban: ");
        gets(ten);
        if (strlen(ten) > 25) {
            printf("nhap lai\n");

        } else break;
    }
    // kiểm tra độ dài tên.
    printf("Ho va ten cua ban la:");
    noiHoVaTen(ho, ten);
    return 0;
}


