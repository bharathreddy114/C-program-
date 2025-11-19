#include <stdio.h>
int main() {
    int a = 5, b = 3;
    printf("a == b: %d
", a == b);   // Output: 0 (false)
    printf("a != b: %d
", a != b);   // Output: 1 (true)
    printf("a > b: %d
", a > b);     // Output: 1 (true)
    printf("a < b: %d
", a < b);     // Output: 0 (false)
    printf("a >= b: %d
", a >= b);   // Output: 1 (true)
    printf("a <= b: %d
", a <= b);   // Output: 0 (false)
    return 0;
}
