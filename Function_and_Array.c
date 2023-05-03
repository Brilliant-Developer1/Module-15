#include <stdio.h>

void fun(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    fun(array, 5);

    return 0;
}