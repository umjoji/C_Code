#include <stdio.h>

/* This code gives the sum of two numbers */

int product_int(int x, int y)
{
	int result;

	result = x * y;
	return (result);
}

/* Main function */

int main(void)
{
	int product;

	product = product_int(3, 5);
	printf("The product of 3 and 5 is %d. \n", product);
	return (0);
}
