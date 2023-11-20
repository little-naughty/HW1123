#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));

	int frequency[13] = { 0 };

	int dice1;
	int dice2;

	printf("%s%17s\n", "Point", "Frequency");

	for (int roll = 1;roll <= 36000; roll++)
	{
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		++frequency[dice1 + dice2];
	}

	for (int point = 2; point <= 12; point++)
	{
		printf("%4d%17d\n", point, frequency[point]);
	}

	return 0;
}