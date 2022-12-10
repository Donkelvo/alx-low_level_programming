#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabelts
 * Return: returns 0 (successful)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
