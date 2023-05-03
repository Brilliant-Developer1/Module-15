#include <stdio.h>

void fun(int array[], int size)
{
    array[2] = 35;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    fun(array, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}