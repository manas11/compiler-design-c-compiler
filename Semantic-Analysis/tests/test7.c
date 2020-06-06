//correct test for all loops
#include<stdio.h>

int main()
{
    int b=0;
    for (b = 0; b < 10; b++)
        {
        	printf("H3ll0");
        }
    
    while(b>0) {
        b-=2;
    }

    do {
        b+=5;
    }while(b<10);
}