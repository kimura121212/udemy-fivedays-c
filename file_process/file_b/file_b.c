#include <stdio.h>

int main() {
    FILE *fp;
    char str[256];
    int b;

    fp = fopen("file.txt", "rb");
    fread(&b, sizeof(b), 1, fp);

    printf("%d\n", b);
    fclose(fp);

    return 0;
}