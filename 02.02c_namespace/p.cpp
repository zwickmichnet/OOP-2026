#include <stdio.h>


// global namespace

int x = 1;			// name is x (fully qualified as ::x)
int y = 2;			// name is y (fully qualified as ::y)

namespace abc
{
	// now in namespace "abc"

	int y = 3;		// name is abc::y (can also be written as ::abc::y)
					// does not collide with global y

	int f(int u)	// fully qualified as abc::f
	{
		int z = 3;	// local variable with block scope in function abc::f
					// does NOT have a namespace qualifier, as it
					// cannot be accessed from outside funciton abc::f

		z = u;		// parameter in the same function; as u is a local
					// variable, abc::u would not be allowed
					// assigns z <- 4

		z = y;		// same namespace => abc::y not needed
					// assigns z <- 3

		z = ::y;	// assigns to z the value of y with global scope
					// assigns z <- 2
		
		z = x;		// ok, refers to ::x
					// assigns z <- 1

		z = ::x;	// ok, explicitly refers to the global ::x
					// assigns z <- 1
		
		return z;
	}
}

// global namespace

int main()
{
	int x;

	x = abc::f(4);

	printf("x: %d\n", x);
}