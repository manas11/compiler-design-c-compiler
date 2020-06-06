// function calling another function


#include <stdio.h>

void fun2(int n){
	printf("hello from fun 2");
}
void fun1(int n)
{
	printf("hello from fun 1");
	fun2(3);
}

void main()
{

	fun1(3);
}
