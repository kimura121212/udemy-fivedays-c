#include <stdio.h>
int min(int x, int y, int z) {
    int min = 0;
    if (x >= y) {
        if(y >= z){
            min = z;
        }else{
            min = y;
        }
    } else {
        if(x >= z){
            min = z;
        }else{
            min = x;
        }
    }
    return min;
}

int main(){
    int b=0;

    b = min(5,2,3);
    printf("%d\n", b);
    return 0;
}
