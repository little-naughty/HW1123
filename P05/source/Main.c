#include<stdio.h>

int main()
{
	int a;
	int *aptr;

	a = 7;
	aptr = &a;

	printf("The address of a is %p\n"
		"The value of aPtr is %p", &a, aptr);

	printf("\n\nThe value of a is %d\n"
		"The value of *aPtr is %d", a, *aptr);

	printf("\n\nShowing that * and & are complements of "
		"each other\n&*aPtr = %p\n"
		"*&aPtr = %p\n", &*aptr, *&aptr);

	return 0;
}