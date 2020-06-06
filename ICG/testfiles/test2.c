// exmaple of duplication b assigned twice

#include <stdio.h>

void increase_number(int x)
{
	int x = 20;
	int y = 10;
	y = y + x;
	printf("%d",y);
	
}

void main()
{
	int x = 2;
	x = 4;
	increase_number(x);
	printf("%d", x);
}
