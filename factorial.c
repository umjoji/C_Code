#include <stdio.h>

int factorial(int number)
{
	int factorial = 1;

	for (int i = number; i > 1; i--)
	{
		factorial *= i;
	}

	return (factorial);
}

int main(void)
{
	int x;
	int y;

	printf("Enter a number to factorial: ");
	scanf("%d", &x);
	y = factorial(x);


	printf("The factorial of %d is %d.\n", x, y);
	return (0);
}
