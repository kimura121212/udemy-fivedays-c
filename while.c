#include <stdio.h>
#include <stdbool.h>

int main () {
    int i=0;

    while (true){
        scanf("%d", &i);

        if (i==0){
            break;
        }
        printf("Your input number is %d\n", i);

    }

    return 0;
}