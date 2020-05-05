#include <stdio.h>

int max();

int main () {
    int a, b, m;
    a = 10;
    b = 12;

    m = max(a, b);

    printf("%d\n", m);
    printf("a:%d, b:%d\n", a , b);

    return 0;
}

int max(int x, int y) {
    if (x > y) {
        x = x + 10;
        return x;
    } else {
        y = y + 10;
        return y;
    }
}