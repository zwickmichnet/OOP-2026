#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;

	int *p = &a;				// p points to a
	int &r = b;					// r is a reference to b

	printf("a:  %d\n", a);		// 1
	printf("*p: %d\n", *p);		// 1
	printf("b:  %d\n", b);		// 2
	printf("r:  %d\n\n", r);	// 2

	*p = 3;						// change a via p
	r = 4;						// change b via r

	printf("a:  %d\n", a);		// 3
	printf("*p: %d\n", *p);		// 3
	printf("b:  %d\n", b);		// 4
	printf("r:  %d\n\n", r);	// 4

	p = &b;						// p points to b
	*p = 5;						// change b via p

	printf("a:  %d\n", a);		// 3
	printf("*p: %d\n", *p);		// 5
	printf("b:  %d\n", b);		// 5
	printf("r:  %d\n\n", r);	// 5

	r = a;						// copies the VALUE of a to r/b/*p
	r = 6;						// set r/b/*p to 6

	printf("a:  %d\n", a);		// 3
	printf("*p: %d\n", *p);		// 6
	printf("b:  %d\n", b);		// 6
	printf("r:  %d\n", r);		// 6
}