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
	const char *str;

	va_start(args, format);
	while (i < num_args)
	{
		switch (format[i])
		{
			case 'i':
				printf("%d%s", va_arg(args, int), separator);
				break;
			case 'c':
				printf("%c%s", va_arg(args, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), separator);
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("(nil)%s", separator);
				}
				else
				{
					printf("%s%s", str, separator);
				}
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
