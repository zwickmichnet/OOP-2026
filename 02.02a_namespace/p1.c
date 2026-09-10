// p1.c
#include <stdio.h>

extern int a;
extern int b;
extern int c;

void f(void)
{
	int d = 4;					// local variable
}

int main()
{
	int e = 5;

	printf("a: %d\n", a);		// ok, a is available in p2.c and
								// a in p2.c has external linkage
	printf("b: %d\n", b);		// linker error: undefined symbol _b
								// b in p2.c has internal linkage
	printf("c: %d\n", c);		// linker error: undefined symbol _c
								// c in p2 is local and has no linkage
	printf("d: %d\n", d);		// compiler error: undeclared identifier
								// d is local to f
	printf("e: %d\n", e);		// ok, e is local to this function

}