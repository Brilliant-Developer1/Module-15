#include <stdio.h>
int main()
{
    double x = 5.26;
    double *ptr = &x;
    *ptr = 99.99;

    printf("%.2lf\n", x);
    printf("%.2lf\n", *ptr);
    printf("ptr size = %lu byte\n", sizeof(ptr));
    printf("x size = %lu byte\n", sizeof(x));
    return 0;
}