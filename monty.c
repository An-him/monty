#include "monty.h"
#include <stdio.h>
#include <unistd.h>
/**
 *main - monty interpreter
 *@argc: count of args
 *@argv: argv
 *Return: succeess
 **/
int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	ssize_t BytesRead;
	char *lineptr = NULL;
	size_t n = 0;

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
	while ((BytesRead = getline(&lineptr, &n, fp)) != -1)
	{
		char *token = strtok(lineptr, " \t\n");
		if (token != NULL)
		{
			if (strcmp(token, "push") == 0)
			{
				token = strtok(NULL, " \t\n");
				if (token != NULL)
				{
					int value = atoi(token);
					printf("Pushing value: %d\n", value);
					// DO teh push operation with value like this: push(value);
				}
			}
			if (strcmp(token, "pall") == 0)
			{
				printf("Printing all values\n");
				// DO teh print all operation with value like this: pall();
			}
		}
	}
	free(lineptr);
	fclose(fp);
	exit(EXIT_SUCCESS);
}
