#include <stdio.h>
#include <stdlib.h>


/**
 * main - return alphabelts
 * Return: return 0 (Successful)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
		putchar('\n');

	return (0);
}