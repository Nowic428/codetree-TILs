#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool satisfied = false;

    scanf("%d", &n);

    for(int i = 2; i < n; i++)
    {
        if (n % i == 0)
            satisfied = true;
    }
    if(satisfied == true)
        printf("C");
    else
        printf("P");

    return 0;
}