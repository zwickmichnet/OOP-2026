// p2.c
int a = 1;			// external linkage
static int b = 2;	// static => internal linkage

void f2(void)
{
	int c = 3;		// local variable => no linkage
}