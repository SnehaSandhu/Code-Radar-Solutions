#include <stdio.h>
#define pie 3.14
int main()
{
    float radius,area;
    printf(" ");
    scanf("%.2f",&radius);
    area=pie*radius*radius;
    printf("Area: %.2f\n",radius,area);
    return 0;
}