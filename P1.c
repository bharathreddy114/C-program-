//#35th prgramme
programme to test pointers
#include<stdio.h>
int main(){
int a=10;
int *ptr;
ptr=&a;
printf("value of a=%d\n",a);
printf("adrress  of a=%p\n",ptr);
printf("adrress at a=%d\n",*ptr);
return 0;
}
