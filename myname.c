#include <stdio.h>

int main(){
    char str[256];
    scanf("%255[^\n]", str);

    printf("My Name is %s\n", str);

    return 0;
}