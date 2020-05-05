#include <stdio.h>

int main() {
    int *p;
    int a = 10;

// 変数aのアドレス
    p = &a;

    *p = 20;

    printf("%d, %x\n", a, &a);

    // *p: ポインタが指し示す先の値
    printf("%d, %x\n", *p, p);

    return 0;
}