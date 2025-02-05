#include <stdio.h>
int main()
{
    int profit,loss;
    printf("");
    scanf("%d%d"&profit,&loss);
    if (profit>loss)
    {
        printf("Profit");
    }
    else if (loss>profit)
    {
        printf("Loss");
    }
    else if( loss==profit)
    {
        printf("No Profit No Loss");
    }
    else{
        printf("Invalid");
    }
    return 0;

}