#include "monty.h"
/**
 *main - monty interpreter
 *@argc: count of args
 *@argv: argv
 *Return: succeess
 **/
int main(int argc, char *argv[])
{
	FILE *fp = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	fclose(fp);
	exit(EXIT_SUCCESS);
}
