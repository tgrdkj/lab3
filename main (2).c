#include <stdio.h>
#include <math.h>

int main() {
    float radius, length, width;

    printf("Радiус: ");
    scanf("%f", &radius);
    printf("Висота: ");
    scanf("%f", &length);
    printf("Ширина: ");
    scanf("%f", &width);

    float diameter = 2 * radius;
    float diagonal = sqrt(length * length + width * width);

    if (diagonal <= diameter) {
        printf("Поміститься\n");
    } else {
        printf("Не помicтиться\n");
    }

    return 0;
}