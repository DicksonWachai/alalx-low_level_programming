#include <stdio.h>
/**
 * main - prints the alphabet in lowercases
 *
 *
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
