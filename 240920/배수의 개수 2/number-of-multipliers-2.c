#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d\n", &a);
            if(a % 2 != 0)
                cnt++;
    }
    printf("%d", cnt);
    return 0;
}