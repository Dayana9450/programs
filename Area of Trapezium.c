#include <stdio.h>
int main() {
    float base1, base2, height, area;
    scanf("%f %f %f", &base1, &base2, &height);
    area = 0.5f * (base1 + base2) * height;
    printf("%.4f\n", area);
    return 0;
}
