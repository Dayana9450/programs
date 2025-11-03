#include<stdio.h>
int main(){
    int speed_kmh;
    float speed_ms;
    scanf("%d", &speed_kmh);
    speed_ms=speed_kmh/3.6;
    printf("%.2f", speed_ms);
    return 0;
}
