#include <stdio.h>

void func();

int main(){
    int a[] = {0,0,0,0,0,0,0,0,0,0};

    func(a);
    printf("%d\n", a[3]);

    return 0;
 }

 void func(int a[]) {
     a[0] = 10;
 }