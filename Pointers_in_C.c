#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;

    printf("%d\n", x);
    printf("%d\n", *ptr);
    printf("ptr er size - %d\n", sizeof(ptr));
    printf("x er size - %d\n", sizeof(x));
    // printf("%p\n", ptr);
    // printf("%p", &ptr);
    return 0;
}