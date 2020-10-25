#include <stdio.h>
int main()
{
	int age;
	pritf("enter the age of candidate\n");
	scanf("%d", &age);
	if (age <= 18)
	{
		printf("the candidate is eligiable for voting\n");
	}
	else
	{
		printf("the candidate is not eligiable for voting\n");
	}
	return 0;
}
	
