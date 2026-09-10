#include <stdio.h>

void f(int& i)
{
	i *= 2;
}

int main()
{
	int a = 1;

	f(a);

	printf("a: %d\n", a);

}