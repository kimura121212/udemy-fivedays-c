#include <stdio.h>

int global = 0;

void func();

int main (void) {
    global = 1;
    printf("%d\n", global);

    func();
    printf("%d\n", global);
}

void func(void) {
    global = 10;
}