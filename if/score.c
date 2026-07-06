#include <stdio.h>
int main() {
    int A;
    printf("Enter a score: ");
    scanf("%d", &A);
    if (A >= 50) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }
    return 0;
}