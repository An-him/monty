#include "monty.h"
/**
 *main - monty interpreter
 *@argc: count of args
 *@argv: argv
 *Return: succeess
 **/
int main(int argc, char *argv[])
{
	if (argc == 0 || argc > 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	FILE *fp = argv[2];
	return (EXIT_SUCCESS);
}
