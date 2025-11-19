#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    do {
        sum += i;  
        i++;      
    } while (i <= n); 

    printf("Sum of first %d natural numbers is: %d
", n, sum);

    return 0;
}
