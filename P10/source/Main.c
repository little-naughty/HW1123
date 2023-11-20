#include<stdio.h>

void cubeReference(int *nptr);

int main()
{
	int number = 5;

	printf("The original value of number is %d", number);

	cubeReference(&number);

	printf("\nThe new value of number is %d\n", number);

	return 0;
}

void cubeReference(int *nptr)
{
	*nptr = *nptr * *nptr * *nptr;
}