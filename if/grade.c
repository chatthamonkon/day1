#include <stdio.h>
int main() {
    int A;
    printf("Enter a score: ");
    scanf("%d", &A);
    if (A >= 80) {
        printf("Grade: 4\n");
    } else if (A >= 70) {
        printf("Grade: 3\n");
    } else if (A >= 60) {
        printf("Grade: 2\n");
    } else {
        printf("Grade: 1\n");
    }
    return 0;
}