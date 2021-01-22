#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <string.h>

void delelement(t_element *list)
{
	t_element *D;

	if (list == NULL)
	{
		exit(0);
	}
	while (list->next->next != NULL)
	{
		list = list->next;
	}
	D = list->next;
	list->next = NULL;
	free(D);
}
