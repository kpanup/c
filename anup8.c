#include<stdio.h>
int main()
{
	int ch, a, b;
	printf("\n\t MENU");
	printf("\n 1 Addition");
	printf("\n 2 Subtraction");
	printf("\n 3 multiplication");
	printf("\n 4 Division");
	printf("\n Enter your choice: ");
	scanf("%d", &ch);
	printf("\n Enter two numbers: ");
	scanf("%d %d", &a, %b);
	switch(ch)
	{
		case 1 :
			printf("\n Addition = %d\n", a+b);
			break;
		case 2 :
			printf("\n Subtraction = %d\n, a-b);
			break;
		case 3 :
			printf("\n Multiplication = %d\n", a*b);
			break;
		case 4 :
			printf("\n Division = %d\n", a/b);
			break;
		default : printf("\n Invalid choice\n");
	}
	return 0;
