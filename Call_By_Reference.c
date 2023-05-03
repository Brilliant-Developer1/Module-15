#include <stdio.h>

void fun(int *p)
{
    printf("fun value %d\n", *p);
    *p = 150;
    printf("fun after value %d\n", *p);
}
int main()
{
    int x = 100;
    printf("main adress %p\n", &x);
    printf("main x value %d\n", x);
    fun(&x);
    printf("main after value %d\n", x);
    return 0;
}