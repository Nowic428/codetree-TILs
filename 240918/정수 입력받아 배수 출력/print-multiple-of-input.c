#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum;

    scanf("%d", &n);

    sum = n;

    for (int i = 0; i < 5; i ++)
    {
        printf("%d ", sum);
        sum += n;
    }
    return 0;
}