#include <stdio.h>
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    printf("%d", *(array + 2));
    return 0;
}