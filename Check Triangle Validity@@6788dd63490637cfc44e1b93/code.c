#include <stdio>
int main()
{
    int a,b,c;
    printf("");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b+c&&b>c+a&&c>b+a)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}