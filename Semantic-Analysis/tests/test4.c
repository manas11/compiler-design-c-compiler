//error test for function return mismatch
#include<stdio.h>

void voidReturningFunc(int a)
{
    int abc=1;
    return a;
}

void main()
{
    int i,n;

    voidReturningFunc(i);

    printf("%d",i)

}
