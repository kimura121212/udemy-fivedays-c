#include <stdio.h>

int main() {
    char a[10] = "Hello";

    printf("%s\n", a);

    for (int i = 0; i < sizeof(a); i++) {
        printf("%x\n", a[i]);
    }

    return 0;

}