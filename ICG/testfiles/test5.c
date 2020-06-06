// calculating cube, but duplicate assignment here

#include <stdio.h>
int cube(int v)
{
	int v = 3;
	int cube = v * v * v;
	return cube;
}

int main()
{
	int x = 3;
	int ans = cube(x);
	printf("answer: %d", ans);

	return 0;
}