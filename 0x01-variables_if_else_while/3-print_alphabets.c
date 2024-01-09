#include <stdio.h>
/**
 * main - prints both lowercase and uppercase letters
 *
 *
 * Return: 0
 */
int main(void)
{
	int n = 97;

	int m = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (m < 91)
	{
		putchar(m);
		m++;
	}
	putchar(10);
	return (0);
}
