#include <stdio.h>

int main(){
    char str[256];
    int a = 10;

    scanf("%255[^\n]", str);

    printf("Your input string %s\n", str);
    printf("%d\n", a);

    return 0;
}