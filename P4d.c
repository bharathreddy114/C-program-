#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > 0) {
        if (num2 > 0) {
            printf("Both numbers are positive.
");
        } else {
            printf("First number is positive, but second is not.
");
        }
    } else {
        printf("First number is not positive.
");
    }

    return 0;
}
