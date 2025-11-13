#include <stdio.h>
int main() {
    int intValue;
    float floatValue;
    char charValue;
    double doubleValue;

    printf("Enter an integer: ");
    scanf("%d", &intValue);

    printf("Enter a float: ");
    scanf("%f", &floatValue);

    printf("Enter a character: ");
    scanf(" %c", &charValue); 

    printf("Enter a double: ");
    scanf("%lf", &doubleValue);

    printf("\nYou entered:\n");
    printf("Integer: %d\n", intValue);
    printf("Float: %f\n", floatValue);
    printf("Character: %c\n", charValue);
    printf("Double: %lf\n", doubleValue);

    return 0;
}
