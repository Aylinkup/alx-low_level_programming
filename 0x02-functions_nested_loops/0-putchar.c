#include "holberton.h"

/**
 * main - function that prints my name
 *
 * Description: Prints Ayotunde with _putchar
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "Ayotunde\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
