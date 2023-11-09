#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;

	va_list(args);
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		while (i < n)
		{
			sum = sum + va_arg(args, int);
			i++;
		}
		return (sum);
	}
	va_end(args);
}
