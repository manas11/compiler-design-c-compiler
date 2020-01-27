#include<stdio.h>

int main()
{
	int arr[3] = { 1, 2 };
	arr[2] = arr[1] + arr[2];
	arr[2]++;/*checking for multi
	line 
	comment*/

	printf("%d", arr[2]);

 	return 0;
}
