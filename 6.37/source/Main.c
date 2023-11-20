#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	srand(time(NULL));

	int a[10];

	int n = rand() % 9 + 2;

	int max = 0;

	for (int x = 0; x < n; x++)
	{
		a[x] = rand() % 100 + 1;
	}

	for (int x = 0; x < n; x++)
	{
		if (a[x] > max)
		{
			max = a[x];
		}
	}
	printf("%d", max);
	
	return 0;
}