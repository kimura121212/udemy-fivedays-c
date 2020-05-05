#include <stdio.h>

int square(int a, int c) {
    int b = 1;

    for (;c > 0; c--) {
        b = b * a;
    }

    return b;
}

int main () {
    int a, b, c;
    a = 10;
    c = 3;

    b = square(a, c);

    printf("%d\n", b);

    return 0;
}
