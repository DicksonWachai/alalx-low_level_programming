#include <stdarg.h>
#include <stdio.h>
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
	char *separator = ", ";
	int num;
	float number;
	char letter;
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				letter = va_arg(args, int);
				printf("%c%s", letter, separator);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d%s", num, separator);
				break;
			case 'f':
				number = va_arg(args, double);
				printf("%f%s", number, separator);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s%s", str, separator);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
