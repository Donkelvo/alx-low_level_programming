#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabelts
 * Return: return 0 (Successful)
 */

int main(void)
{
	char low, e, q;


	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');

	return (0);
}
