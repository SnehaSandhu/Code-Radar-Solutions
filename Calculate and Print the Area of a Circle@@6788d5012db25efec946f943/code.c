#include <stdio.h>
#define pi 3.14
int main()
{
    float radius,area;
    printf("");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area: %.2f",radius,area);
    return 0;
}