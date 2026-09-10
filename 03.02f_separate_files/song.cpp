#include <stdio.h>
#include "song.hpp"

void Song::print()
{
	printf("%s (%02d:%02d)\n", title, duration / 60, duration % 60);
}

void Song::enter()
{
	printf("Title: ");
	scanf("%s", title);
	printf("Duration: ");
	scanf("%d", &duration);
}