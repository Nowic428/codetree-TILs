#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,c;
    char b,d;

    scanf("%d %c", &a, &b);
    scanf("%d %c", &c, &d);

    if ((a >= 19 && b == 'M') || c >= 19 && d == 'M')
        printf("1");
    else
        printf("0");
    return 0;
}