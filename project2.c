#include <stdio.h>
#include "ascii_art.h"

int main(void) {
    int num, blank, line;
    char(*main)[46] = NULL;
    char(*flower)[18] = NULL;
    char(*castle)[57] = NULL;

    while (1) {
        printf("\n그림 번호 선택(1. main, 2.flower, 3.castle, 기타:종료): ");
        scanf_s("%d", &num);

        if (num == 1) {
            main = ascii_main;
            printf("오른쪽으로 몇 칸 이동할까요? ");
            scanf_s("%d", &blank);
            printf("아래로 몇 줄 이동할까요? ");
            scanf_s("%d", &line);
            printf("선택한 그림을 해당 위치로부터 출력합니다.\n");

            for (int k = 0; k < line; k++) {
                printf("\n");
            }
            for (int i = 0; i < 9; i++) {
                for (int p = 0; p < blank; p++) {
                    printf(" ");
                }
                for (int j = 0; j < 46; j++) {
                    printf("%c", main[i][j]);
                }
                printf("\n");
            }
        }
        else if (num == 2) {
            flower = ascii_flower;
            printf("오른쪽으로 몇 칸 이동할까요? ");
            scanf_s("%d", &blank);
            printf("아래로 몇 줄 이동할까요? ");
            scanf_s("%d", &line);
            printf("선택한 그림을 해당 위치로부터 출력합니다.\n");

            for (int k = 0; k < line; k++) {
                printf("\n");
            }
            for (int i = 0; i < 13; i++) {
                for (int p = 0; p < blank; p++) {
                    printf(" ");
                }
                for (int j = 0; j < 18; j++) {
                    printf("%c", flower[i][j]);
                }
                printf("\n");
            }
        }
        else if (num == 3) {
            castle = ascii_castle;
            printf("오른쪽으로 몇 칸 이동할까요? ");
            scanf_s("%d", &blank);
            printf("아래로 몇 줄 이동할까요? ");
            scanf_s("%d", &line);
            printf("선택한 그림을 해당 위치로부터 출력합니다.\n");

            for (int k = 0; k < line; k++) {
                printf("\n");
            }
            for (int i = 0; i < 20; i++) {
                for (int p = 0; p < blank; p++) {
                    printf(" ");
                }
                for (int j = 0; j < 57; j++) {
                    printf("%c", castle[i][j]);
                }
                printf("\n");
            }
        }
        else {
            printf("안녕히 가세요");
            break;
        }
    }

    return 0;
}
