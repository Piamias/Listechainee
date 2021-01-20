#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void printlist(LIST *list)
{
	while (list != NULL)
	{	
		puts(list->element);	
		list = list->next;
	}
}
