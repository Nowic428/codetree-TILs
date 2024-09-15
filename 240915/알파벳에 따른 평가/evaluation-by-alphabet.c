#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char e;

    scanf("%c", &e);

    if (e == 'S')
        printf("S");
    else if (e == 'A')
        printf("A");
    else if (e == 'B')
        printf("Good");
    else if (e == 'C')
        printf("Usually");
    else if (e == 'D')
        printf("Effort");
    else
        printf("Failure");
    return 0;
}