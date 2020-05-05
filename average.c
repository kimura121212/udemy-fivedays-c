#include <stdio.h>


int main(){
    int a[] = {0,6,6,7,0};

    int average=0;
    int sum=0;

    for (int j=0;j<sizeof(a)/sizeof(int); j++){
        sum = sum+a[j];
    }

    average = sum/5;
    printf("%d\n", average);

    return 0;
 }