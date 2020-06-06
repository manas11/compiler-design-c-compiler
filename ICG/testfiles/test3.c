// normal example of calcuating modulus using a function

#include <stdio.h>

int modulus(int a, int b)
{
	int x = a % b;
	return x;
}

void main()
{
	int a = 2;
	int b = 10;
	int ans = modulus(b, a);
	printf("ans: %d", ans);
}