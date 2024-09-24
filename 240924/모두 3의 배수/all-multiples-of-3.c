#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool satisfied = false;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if(n % 3 == 0)
            satisfied = true;
        else
        {
            satisfied = false;
            break;
        }
    }
    if(satisfied == true)
        printf("1");
    else
        printf("0");
    return 0;
}