#include "monty.h"
/**
 *
 *
 *
 **/
void parse_file(char *filename)
{
  FILE *fp = fopen(filename, "r");
  if (fp == NULL)
    {
      return;
    }
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while (read = getline(&line, &len, fp) == -1)
      {
	printf("%s\n", line);
      }

    fclose(fp);
    free(line);
}
