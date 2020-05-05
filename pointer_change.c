#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int x, y;

    x = 3;
    y = 7;

    swap(&x, &y);
    printf("x:%d, y:%d\n", x, y);

    return 0;
}

void swap(int *a, int *b) {
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}