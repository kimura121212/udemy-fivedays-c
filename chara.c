#include <stdio.h>

int main() {
    char a, b, c, d, e;
    char a2, b2, c2, d2, e2;

    a = 0x48;
    b = 'e';
    c = 'l';
    d = 'l';
    e = 'o';

    printf("%c %c %c %c %c\n", a, b, c, d, e);
    printf("%x %x %x %x %x\n", a, b, c, d, e);

    a2 = 0x48;
    b2 = 0x65;
    c2 = 0x6c;
    d2 = 0x6c;
    e2 = 0x6f;
    printf("%c %c %c %c %c\n", a2, b2, c2, d2, e2);

    return 0;
}