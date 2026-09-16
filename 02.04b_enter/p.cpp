#include <stdio.h>

class Song
{
public:
	char title[20];
	int duration;

	void print()
	{
		printf("%s (%02d:%02d)\n", title, duration / 60, duration % 60);
	}

	// provide method "enter" here

	...

};

int main()
{
	Song s;

	printf("Title: ");
	scanf("%s", s.title);		// key in name

	printf("Duration: ");
	scanf("%d", &s.duration);	// key in duration

	s.print();
}
