//scope error
#include<stdio.h>

int myfunc(int a)
{
    int outOfScopeVar=1;
    return a;
}

void main()
{
    int i,n;

    myfunc(i);

    printf("%d",outOfScopeVar)

}
