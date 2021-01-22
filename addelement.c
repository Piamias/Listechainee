#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <string.h>

t_element *addelement(t_element *list, char *element)
{
	t_element *new;
	
	new = malloc(sizeof(t_element));
	if (new != NULL || list != NULL)
	{
		new->Element = element;
		new->next = list;
	}		
	return new;
}
