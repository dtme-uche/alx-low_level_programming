#include <stdio.h>

/**
 * main - prints name of the program
 *
 * argc: argument count / number of command line arguments.
 * argv: argument vector / array that contains the program command line arguments.
 * Return: int
 */
int main(int argc, char *argv[])
{
    (void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
