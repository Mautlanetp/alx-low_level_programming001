#include <stdio.h>

/**
 * main - print the name of the program.
 *
 * @argc: counts the arguments supplied to th program.
 *
 * @argv: is an array of pointers to the string which are those arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s", argv[i]);
	}
	printf("\n");

	return (0);
}
