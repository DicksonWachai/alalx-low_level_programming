#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 *
 * Return: Printed string, integer, float, char
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int num_args = strlen(format);
	char *separator = ", ";

	va_list args;

	va_start(args, format);
	while (i < num_args)
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
		}
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
