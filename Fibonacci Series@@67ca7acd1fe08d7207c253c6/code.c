#include <stdio.h>
int fibonacci(int num); 
int main()
{
    int num, i;
    printf("");
    scanf("%d", &num);
    
    printf("");
    for (i = 0; i < num; i++) 
        printf("%d ", fibonacci(i)); 

    printf("\n"); 
    return 0;
}

int fibonacci(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

}