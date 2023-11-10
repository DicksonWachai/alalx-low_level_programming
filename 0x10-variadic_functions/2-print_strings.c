#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints a string
 * @separator: separates the string printed
 * @n: number of strings passed to function
 *
 * Return: printed string
 */
void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	const char *str;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
