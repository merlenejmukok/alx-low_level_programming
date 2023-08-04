#include <stdio.h>
#include <stdlib.h>

/**
 *main -function prints result of positive numbers
 *@argc: argument count
 *@argv: number of arguments compiled
 *Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i, j;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
