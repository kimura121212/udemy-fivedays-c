#include <stdio.h>

int autoFunc();
int staticFunc();

int main () {
    int b=0;

    b = staticFunc();
    printf("static:%d\n", b);
    b = staticFunc();
    printf("static:%d\n", b);
    for (int j =0; j<10; j++){
        b = staticFunc();
        printf("static:%d\n", b);
    }
    return 0;
}

int staticFunc() {
    static int i = 0;
    i++;
    return i;
}