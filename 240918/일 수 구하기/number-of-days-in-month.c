#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d", &a);

    if (a == 4 || a == 6 || a == 9 || a == 11)
        printf("30");
    else if (a == 2)
        printf("28");
    else 
        printf("31");
    return 0;
}