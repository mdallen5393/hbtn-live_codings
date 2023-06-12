#include <stdio.h>
#include <stdlib.h>

int ifact(int n);
int rfact(int n);

/**
 * main - main function
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int n = 0;
	if (argc > 1)
		n = atoi(argv[1]);

	printf("Final Result: %d! = %d\n", n, rfact(n));
	/* printf("%d! = %d\n", n, ifact(n)); */
	return (0);
}

/**
 * ifact - calculates factorial using iteration
 * @n: Positive integer or 0
 *
 * Return: n! (invalid for large numbers)
 */
int ifact(int n)
{
	if (n == 0 || n == 1)
		return (1);

	int result = n;

	for (n -= 1; n > 1; n--)
		result *= n;
	return (result);
}

/**
 * rfact - calculates factorial using iteration
 * @n: integer to calculate factorial for
 *
 * Return: n! (invalid for large numbers)
 */
int rfact(int n)
{
	if (n == 0 || n == 1)
		return (1);

	return (n * rfact(n - 1));
}

/**
 * rfact - calculates factorial using iteration
 * @n: integer to calculate factorial for
 *
 * Return: n! for n >= 1, otherwise 0
 */
/* int rfact(int n)
{
	if (n == 0)
	{
		printf("Base case: 0! = 1 by definition.\n");
		return (1);
	}
	if (n == 1)
	{
		printf("Base case: 1! = 1\n");
		return (1);
	}
	printf("Recursive call: %d! = %d * %d!\n", n, n, n - 1);
	return (n * rfact(n - 1));
} */
