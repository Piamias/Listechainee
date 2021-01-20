#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int main(void)
{
	LIST *list;

	list = NULL;

	list = addelement(list,"un\n");

	list = addelement(list,"deux\n");

	list = addelement(list,"trois\n");

	list = addelement(list,"quatre\n");

	printlist(list);
	return 0;
}

