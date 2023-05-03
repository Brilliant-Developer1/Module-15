#include <stdio.h>
#include <string.h>
void fun(char array[])
{
    // int size = sizeof(array) / sizeof(char);
    printf("%d\n", strlen(array));
    for (int i = 0; i < strlen(array); i++)
    {
        printf("%c", array[i]);
    }
}
int main()
{
    char array[8] = {"Hello"};
    // int size = sizeof(array) / sizeof(char);
    // printf("%d", size);
    fun(array);
    return 0;
}
