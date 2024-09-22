#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, n;
    int sum = 0;
    int cnt = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum += a;
        cnt++;
    }
    printf("%d %.1f", sum, (double)sum/cnt);
    return 0;
}