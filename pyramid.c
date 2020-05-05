#include <stdio.h>

int main() {
    int dansu = 10;
    for(int i = 1; i <= dansu; i++) {
        for (int k = dansu; k > i; k--) {
            printf(" ");
        }
        for (int j = 1; j <= i*2-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}