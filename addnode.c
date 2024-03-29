#include "monty.h"
/**
 *addnode - 
 *
 *
 *
 **/
void addnode(int data)
{
  stack_t *new = malloc(sizeof(stack_t));
  stack_t->next = NULL;
  stack_t->prev = NULL;
  if (new == NULL)
    {
      printf("Error: malloc failed\n");
      exit(EXIT_FAILURE);
    }
  if (!head)
    {
      head = new;
    }
  new->next = head;
  head = new;
}
