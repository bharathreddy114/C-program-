#include <stdio.h>
int main() {
    int a=6, b=4 , temp;
    printf("before swapping ,a= 4 \n ");
  printf("before swapping ,b= 6 \n ");
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, a = %d\n", a);
    printf("After swapping, b = %d\n", b);
    return 0;
}
