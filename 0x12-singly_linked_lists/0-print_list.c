#include "lists.h"
#include <stdio.h>

/**
 * print_list - function prints all the elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
  int i = 0;

  while (h != NULL)
    {
      if (h->str == NULL)
	{
	  printf("[0] (nil\n");
	  h = h->next;
	  i++
	    }
      printf("[%d] %s\n", h->len, h->str);
      h = h->next;
      i++;
    }
  return (i);
}
