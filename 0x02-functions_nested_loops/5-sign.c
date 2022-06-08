#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n : takes in a sign
 * Return: 1 if > 0, 0 if == 0, -1 if < 0
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
{
	test = 1;
	_putchar('+');
}
else if (n == 0)
{
	test = 0;
	_putchar('0');
}
else if (n < 0)
{
	test = -1;
	_putchar('-');
}
return (test);
}
