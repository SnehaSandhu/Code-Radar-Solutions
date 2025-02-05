#include <stdio.h>
int main()
{
    int a,b;
    printf("");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d",a,b);
    return 0;
}