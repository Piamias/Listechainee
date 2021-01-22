#ifndef __list_h__
#define __list_h__
#include <string.h>

typedef struct s_element t_element;
struct s_element 
{
	char *Element;
	t_element *next;	
};

typedef struct s_list t_list;
struct s_list
{
	t_element *first;
};

t_element *addelement(t_element *list, char *element);

void printlist(t_element *list);

void delelement(t_element *list);

#endif
