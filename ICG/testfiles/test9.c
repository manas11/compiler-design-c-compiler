// passing wrong parameters to a function

#include <stdio.h>

int callme(int x)
{
    return x;
}

void main()
{
    int a1 = 1, a2 = 2;

    callme(a1, a2);
}
