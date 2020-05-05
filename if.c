#include <stdio.h>

int main () {
    int a, b;

    a=1;
    b=0;

    if (a == 1){
        b=1;
    }else if (a==0){
        b=2;
    }

    printf("b: %d\n", b);

    return 0;
}