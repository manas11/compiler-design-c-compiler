//loop syntaxes and continue

#include<stdio.h>

int main()
{
    int a=0;
    for (a = 0; a < 10; a++)
        continue;
    
    while(a>0) {
        a--;
    }

    do {
        a++;
    }while(a<10);
}