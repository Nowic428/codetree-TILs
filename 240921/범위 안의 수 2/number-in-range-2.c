#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, n = 0;
    int sum = 0;

    for(int i = 0; i <10; i++){
        scanf("%d\n", &a);
        
        if (a <= 200 && a >= 0){
            sum += a;
            n++;
        }
    }
    printf("%d %.1f", sum, (double)sum/n);
    return 0;
}