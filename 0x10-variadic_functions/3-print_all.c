#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * @...: number of arguments
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int num;
	float number;
	char letter;
	char *str;
	char *separator = ", ";
	int num_args = strlen(format);
	va_list args;

	va_start(args, format);
	while (i < num_args)
	{
		if (format[i] == 'c')
		{
			letter = va_arg(args, int);
			printf("%c%s", letter, separator);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)%s", separator);
			}
			else
			{
				printf("%s%s", str, separator);
			}
		}
		else if (format[i] == 'f')
		{
			number = va_arg(args, double);
			printf("%f%s", number, separator);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d%s", num, separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
