#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt = 0;

    scanf("%d", &n);

    while(1)
    {
        if(n % 2 == 0)
            n /= 2;
        else if (n == 1)
        {
            printf("%d", cnt);
            break;
        }
        else
            n = (n*3+1);
        cnt++;
    }
    return 0;
}