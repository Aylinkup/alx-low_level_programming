#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints _putchar followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
