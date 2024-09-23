#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {   
        if(n / i > 1)
        {
            cnt++;
        }
        else
            break;

        n /= i;
    }
    printf("%d", cnt);
    return 0;
}