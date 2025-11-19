#include <stdio.h>

int main() {
    int a = 10;
    int b;
    
    b = ++a; // Prefix increment: a becomes 11, then b = 11
    printf("a = %d, b = %d
", a, b);

    b = a++; // Postfix increment: b = 11, then a becomes 12
    printf("a = %d, b = %d
", a, b);

    b = --a; // Prefix decrement: a becomes 11, then b = 11
    printf("a = %d, b = %d
", a, b);

    b = a--; // Postfix decrement: b = 11, then a becomes 10
    printf("a = %d, b = %d
", a, b);

    return 0;
}
