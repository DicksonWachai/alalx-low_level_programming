#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - checks last_digit
 *
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		int last_digit = n % 10;

		char str[] = "Last digit of";

		if (last_digit > 5)
			printf("%s %d is %d and is greater than 5\n", str, n, last_digit);
		else if (last_digit == 0)
			printf("%s %d is %d and is 0\n", str, n, last_digit);
		else if ((last_digit < 6) && (last_digit != 0))
			printf("%s %d is %d and is less than 6 and not 0\n", str, n, last_digit);
	}
	else
	{
		int last_digit = n % -10;

		char str[] = "Last digit of";

		printf("%s %d is %d and is less than 6 and not 0\n", str, n, last_digit);
	}
	return (0);
}
