#include <stdio.h>

struct Song
{
	char title[20];
	int duration;
};

int main()
{
	Song s;
	printf("sizeof(s): %ld\n", sizeof(s) );
}