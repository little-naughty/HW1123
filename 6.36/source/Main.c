#include<stdio.h>

void StringReverse(char a[]);

int main()
{
	char String[20];

	scanf("%s", &String);

	StringReverse(String);

	return 0;
}
void StringReverse(char a[])
{
	if (a[0] == '\0')
	{
		return;
	}
	else
	{
		StringReverse(a + 1);
		printf("%c", a[0]);
	}
}