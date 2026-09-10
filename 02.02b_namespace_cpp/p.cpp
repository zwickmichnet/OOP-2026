#include <stdio.h>

// global scope
int x = 1;			// global variable x, fully qualified as ::x

namespace abc
{
	// now in namespace "abc"

	int x = 2;				// global variable, fully qualified as 
							// abc::x and ::abc::x
	namespace def
	{	
		// now in namespace "abc::def"
		
		int x = 3;			// global variable, fully qualified as
	}						// abc::def::x and ::abc::def::x
}

int main()
{
	printf("x = %d\n", x);
	printf("::x = %d\n\n", ::x);

	printf("abc::x = %d\n", abc::x);
	printf("::abc::x = %d\n\n", ::abc::x);

	printf("abc::def::x = %d\n", abc::def::x);
	printf("::abc::def::x = %d\n", ::abc::def::x);
}