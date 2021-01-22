#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <string.h>

void printlist(t_element *list)
{
	while (list != NULL)
	{	
		puts(list->Element);	
		list = list->next;
	}
}
