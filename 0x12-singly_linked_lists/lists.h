#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 *stuct list_s - lined list
 *@next: points to next node
 *@str: string
 *@len: lenth for string
 *Description: singly linked list
 *Description: struct list_s
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;

} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
