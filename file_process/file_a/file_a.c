#include <stdio.h>

int main(){
    FILE *fp;
    int a;
    a = 10;

    fp = fopen("file.txt", "ab");
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);

    return 0;
}