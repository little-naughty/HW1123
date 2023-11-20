#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(a) / sizeof(a[0]);
	int target = 6;

	int left = 0;
	int right = n - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (a[mid] == target)
		{
			printf("Find the target number %d", target);
			return 0;
		}
		else if (a[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return 0;
}