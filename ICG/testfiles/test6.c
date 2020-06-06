// to work in all kind of loops for, while, do while

#include <stdio.h>

int main()
{
    int temp = 0;
    for (temp = 0; temp < 5; temp++)
    {
        printf("hello fo loop\n");
    }

    while (temp > 0)
    {

        printf("hello while loop\n");
        temp = temp - 1;
    }

    do
    {
        printf("hello do while loop\n");
        temp = temp - 1;
    } while (temp > 10);
}