#include <stdio.h>

class Song
{
	char title[20];
	int duration;

public:
	void print()
	{
		printf("%s (%02d:%02d)\n", title, duration / 60, duration % 60);
	}

	void enter()
	{
		printf("Title: ");
		scanf("%s", title);
		printf("Duration: ");
		scanf("%d", &duration);
	}





};

int main()
{
	Song s;

	s.enter();
	s.print();
}
