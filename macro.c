#include <stdio.h>

// #define 定数名 値
#define MAX 10
#define NAME "YAMADA"

// #define 関数名(変数) 処理内容
#define PRINT(d) printf("%d\n", d)
#define ISPOS(a) ((a) > 0 ? 1 : 0)

int main(){
    int a = 10;

    for (int i = 0; i < MAX; i++) {
        PRINT(i);
    }

    if (ISPOS(a)) {
        printf("positive\n");
    }
 
    return 0;
}