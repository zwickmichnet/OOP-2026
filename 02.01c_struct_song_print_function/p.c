#include <stdio.h>

struct Song
{
	char title[20];
	int duration;
};

void print_song(struct Song s)
{
	printf("%s (%02d:%02d)\n", s.title, s.duration / 60, s.duration % 60);
}

int main()
{
	struct Song s;						// reserverve memory

	printf("Title: ");
	scanf("%s", s.title);				// key in name

	printf("Duration: ");
	scanf("%d", &s.duration);			// key in duration

	print_song(s);						// print "Name (min:sec)"
}