#include <stdio.h>

int x = 1;				// global namespace

namespace abc
{

int x = 2;				// namespace abc

int times3(int a)		// namespace abc
{
	return a*3;
}

}


int main()				// main has to be in global namespace
{
	printf("%d * 3 = %d\n", abc::x, abc::times3(abc::x));

	return 0;
}
