#include<stdio.h>

int main()
{
	int b[] = { 10,20,30,40 };
	int *bptr = b;
	int offset;

	printf("Array b printed with¡G\nArray subscript notation\n");

	for (int x = 0; x < 4; x++)
	{
		printf("b[%d] = %d\n", x, b[x]);
	}

	printf("\nPointer/offset notation where\n"
		"the pointer is the array name\n");

	for (offset = 0; offset < 4; offset++)
	{
		printf("*(b + %d) = %d\n", offset, *(b + offset));
	}

	printf("\nPointer subscript notation\n");

	for (int x = 0; x < 4; x++)
	{
		printf("bPtr[%d] = %d\n", x, bptr[x]);
	}

	printf("\nPointer/offset notation\n");

	for (offset = 0; offset < 4; offset++)
	{
		printf("*(bPtr + %d) = %d\n", offset, *(bptr + offset));
	}

	return 0;
}