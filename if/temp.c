#include <stdio.h>
int main() {
    float temp;
    printf("Enter the temperature: ");
    scanf("%f", &temp);
    if (temp > 50.0) {
        printf("it so hot\n");
    } else if (temp < 0.1) {
        printf("it so cold\n");
    } else {
        printf("it is moderate\n");
    }
    return 0;
}