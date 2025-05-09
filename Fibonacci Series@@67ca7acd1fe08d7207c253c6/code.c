#include <stdio.h>

void fibonacci(int N) {
    int a = 0, b = 1, next;
    
    for (int i = 0; i < N; i++) {
        printf("%d", a);
        if (i < N - 1) {
            printf(" "); 
        }
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n"); 
}

int main() {
    int N;
    scanf("%d", &N);
    fibonacci(N); 
    return 0;
}
