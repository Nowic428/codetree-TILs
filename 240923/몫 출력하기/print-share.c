#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int i = 0;

    while(1)
    {
        scanf("%d", &n);

        if(n % 2 == 0){
            printf("%d\n", n / 2);
            i++;
        }
        if(i == 3)
            break;
    }
    return 0;
}