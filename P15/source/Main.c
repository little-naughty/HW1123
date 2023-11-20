#include<stdio.h>

#define size 10

void bubble(int * const array, const int Size);

int main()
{
	int a[size] = { 2,6,4,8,10,12,89,68,45,37 };

	printf("Data itemss in original order\n");

	for (int x = 0; x < size; x++)
	{
		printf("%4d", a[x]);
	}

	bubble(a, size);

	printf("\nData items in ascending order\n");

	for (int x = 0; x < size; x++)
	{
		printf("%4d", a[x]);
	}
	printf("\n");

	return 0;
}
void bubble(int * const array, const int Size)
{
	void swap(int *element1Ptr, int *element2Ptr);

	int pass;

	for (pass = 0; pass < Size - 1; pass++)
	{
		for (int x = 0; x < Size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap(&array[x], &array[x + 1]);
			}
		}
	}
}
void swap(int *element1Ptr, int *element2Ptr)
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}