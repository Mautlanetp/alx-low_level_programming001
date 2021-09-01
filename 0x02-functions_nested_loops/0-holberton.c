#include "main.h"
#include <string.h>
/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c[] = "_putchar";
	int length, i;

	length = strlen(c);
	
	for (i = 0; i < length; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
