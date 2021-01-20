#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int main(void)
{
	LIST *list;

	list = NULL;

	LIST addelement(list, "un\n");
	LIST addelement(list, "deux\n");
	LIST addelement(list, "trois\n");
	LIST addelement(list, "quatre\n");
	printlist(list);
	return 0;
}

