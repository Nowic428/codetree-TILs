#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int Ma, Ea, Mb, Eb;

    scanf("%d %d", &Ma, &Ea);
    scanf("%d %d", &Mb, &Eb);

    if (Ma > Mb && Mb > Eb)
        printf("1");
    else 
        printf("0");
    return 0;
}