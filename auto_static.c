#include <stdio.h>

int autoFunc();
int staticFunc();

int main () {
    int a = 10, b;

    b = autoFunc(a);
    printf("auto1:%d\n", b);
    b = autoFunc(a);
    printf("auto2:%d\n", b);

    b = staticFunc(a);
    printf("static1:%d\n", b);
    b = staticFunc(a);
    printf("static2:%d\n", b);
    
}

int autoFunc(int a) {
    int x = 0;
    x = x + a;

    return x;
}

int staticFunc(int a) {
    static int x = 0;
    x = x + a;

    return x;
}