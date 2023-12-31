#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = i; j < size; j++)
	{
	_putchar(' ');
	}

	for (j = 1; j <= i; j++)
	{
	_putchar('#');
	}

	_putchar('\n');
	}
	}
}



Task 100
#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
	max = 2;
	n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
	while (n % i == 0)
	{
	max = i;
	n = n / i;
	}
	}

	if (n > 2)
	max = n;

	printf("%ld\n", max);

	return (0);
}



Task101
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
	n1 = -n;
	_putchar('-');
	}
	else
	{
	n1 = n;
	}

	if (n1 / 10)
	{
	print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}

