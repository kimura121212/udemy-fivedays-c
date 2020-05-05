#include <stdio.h>

void func();

int main(){
    int a[] = {0,0,0,0,0,0,0,0,0,0};

    func(a);
    printf("%d\n", a[3]);

    // できればsizeofを使う
    for (int j=0;j<sizeof(a)/sizeof(int); j++){
        printf("%d\n", a[j]);
    }

    return 0;
 }

 void func(int a[]) {
     a[0] = 10;
 }