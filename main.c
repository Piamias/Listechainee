#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int main(void)
{
	t_element *elem;

	elem = NULL;

	elem = addelement(elem,"Delete this\n");

	elem = addelement(elem,"un\n");

	elem = addelement(elem,"deux\n");

	elem = addelement(elem,"trois\n");

	elem = addelement(elem,"quatre\n");

	elem = addelement(elem,"cinq\n");

	printlist(elem);

	delelement(elem);

	delelement(elem);

	printlist(elem);
	return 0;
}

