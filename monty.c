#include "monty.h"
/**
 *main - monty interpreter
 *@argc: count of args
 *@argv: argv
 *Return: succeess
 **/
int main(int argc, char *argv[])
{
  if (argc != 2)
    {
      printf("USAGE: monty file\n");
      exit(EXIT_FAILURE);
    }
  parse_file(argv[1]);
}
