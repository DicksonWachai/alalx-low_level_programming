#include <stdio.h>
/**
 * main - Print all the letters except q and e
 *
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
		n++;
	}
	putchar(10);
	return (0);
}
