#include <stdio.h>

void fun(int x)
{
    printf("fun %p\n", &x);
}
int main()
{
    int x = 100;
    printf("main %p\n", &x);
    fun(x);
    return 0;
}