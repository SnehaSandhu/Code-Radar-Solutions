#include <stdio.h>
int main()
{
    int a;
    printf("");
    scanf("%d",&a);
    if (a>0)
    {
        printf("Positive");
    }
    else if (a<0)
    {
        printf("Negative");
    }
    else if(a==0)
    {
        printf("Zero");
    }
    else{
        printf("Invalid");
    }
    return 0;
}