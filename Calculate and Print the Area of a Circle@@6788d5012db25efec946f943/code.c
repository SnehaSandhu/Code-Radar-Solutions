#include <stdio.h>
#define PI 3.14
int main()
{
    float radius,area;
    printf("");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("Area: %.2f",radius,area);
    return 0;
}