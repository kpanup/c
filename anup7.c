#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year to check that it is a leap year or not\n");
	scanf("%d", &year);
	if (year%400 == )
	{
		printf("leap year\n");
	}
	else if (year%100== 0)
	{
		printf("Not a leap year\n");
	}
	else if (year%4 == 0)
	{
		printf("Leap year\n");
	}
	else
	{
		printf("Not a leap year\n");
	}
	return 0;
