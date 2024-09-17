#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a_math, a_eng;
    int b_math, b_eng;

    scanf("%d %d", &a_math, &a_eng);
    scanf("%d %d", &b_math, &b_eng);

    if (a_math > b_math)
        printf("A");
    else if (a_math < b_math)
        printf("B");
    else if (a_math == b_math && a_eng > b_eng)
        printf("A");
    else
        printf("B");
    return 0;
}