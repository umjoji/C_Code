#include <stdlib.h>
#include <string.h>
#include <stdio.h>
//#include "lists.h"


typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h)
{
	int nodes = 0;

	/* if string is null */
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next; /* move to next struct */
		nodes += 1;
	}
	
	{
		/* check if struct is null */
		for (; h != NULL; h = h->next)
		{
			printf("[%u] (%s)\n", h->len, h->str);
			nodes += 1;
		}
	}
	return (nodes);
}

int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	printf("\n");
	free(new->str);
	new->str = NULL;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	free(new);
	return (0);
}

