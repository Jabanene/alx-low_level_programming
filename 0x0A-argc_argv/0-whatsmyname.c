#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguements passed to the function
 * @argv: arguement vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	
	return (0);
}
