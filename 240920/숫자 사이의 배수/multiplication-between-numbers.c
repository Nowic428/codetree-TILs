#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int sum = 0;
    int cnt = 0;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (i % 5 == 0 || i % 7 == 0){
            sum += i;
            cnt ++;
        }
    }
    printf("%d %.1f", sum, (double)sum/cnt);
    return 0;
}