#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int sum = 0;

    scanf("%d", &a);

    for (int i = 1; i <= 1000;i++)
    {
        if (a % i == 0 && a != i)
            sum += i;
    }
    if(a == sum)
        printf("P");
    else
        printf("N");
    return 0;
}