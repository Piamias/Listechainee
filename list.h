#ifndef __list_h__
#define __list_h__

typedef struct LIST LIST;
struct LIST
{
	char *element;
	LIST *next;	
};

LIST *addelement(LIST *list, char *element);
void printlist(LIST *list);
#endif
