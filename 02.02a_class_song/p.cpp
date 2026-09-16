#include <stdio.h>

typedef struct Song
{
	char title[20];
	int duration;
} Song;

void print_song(struct Song s)
{
	printf("%s (%02d:%02d)\n", s.title, s.duration / 60, s.duration % 60);
}

int main()
{
	struct Song s;						// reserverve memory

	printf("Title: ");
	scanf("%s", s.title);				// key in title

	printf("Duration: ");
	scanf("%d", &s.duration);			// key in duration

	print_song(s);						// print "Title (min:sec)"
}