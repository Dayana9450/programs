#include <stdio.h>
int main() {
    int X, Y, H, total;
    scanf("%d %d %d", &X, &Y, &H);
    if (H <= 1)
        total = X;
    else
        total = X + Y * (H - 1);
    printf("%d\n", total);
    return 0;
}
