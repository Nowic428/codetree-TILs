#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int i = 0;
    int sum = 0;
    
    while(1)
    {
        scanf("%d", &n);

        if(n < 20 || n > 29)
        {
            printf("%.2f", (double)sum/i);
            break;
        }

        sum += n;
        i++;
    }
    return 0;
}