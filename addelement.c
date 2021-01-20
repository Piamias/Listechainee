#include <stdio.h>
#include <stdlib.h>
#include "list.h"

LIST *addelement(LIST *list, char *element)
{
	LIST *E;
	E = malloc(sizeof(LIST));
	if (E != NULL)
	{
		E->element = element;
		E->next = list;
	}		
	return E;
}
