//  Check an integer is odd or even
#include <stdio.h>

int main() {
	int num = 0;
	printf("Enter an integer:\n");
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("%d is even\n", num);
	} else {
		printf("%d is odd\n", num);
	}
	return 0;
}
