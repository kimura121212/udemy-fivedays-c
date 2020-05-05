#include <stdio.h>

int main(){
    char str[256];
    int a = 10;

// 自分の期待する文字数のメモリ領域を確保しないとバグが起きる
// scanfはホワイトスペースなどを無視するので、しっかりとどのような値を受け取りたいかは正規表現で明記しておく必要がある
    scanf("%255[^\n]", str);

    printf("Your input string %s\n", str);
    printf("%d\n", a);

    return 0;
}