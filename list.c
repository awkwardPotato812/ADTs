/*
    DESCRIPTION : Iplemetation of singly linked list.Header file list .h is created to store the definition 
                  of list.
    AUTHOR :P.V.Srinidhi
    EMAIL:srinidhi.812@gmail.com
    VERSION :1.0
*/

#include "list.h"
#include <stdio.h>
#include <stdlib.h>
    

void list_init(lnodep *p)
{
	*p = NULL;
}

void list_push(lnodep *p,void *elem)
{
	lnodep q = (lnode *)malloc(sizeof(lnode));
	q->element = elem;
	q->next = NULL;
	if(*p == NULL)
		{*p = q; printf("Inserted \n");}
	else{
		q->next = *p;
		*p = q;
		printf("Inserted\n");
	}
}

void list_pop(lnodep *p)
{
	lnodep q = *p;
	q->element = NULL;
	*p = q->next;
	free(q);
	printf("Deleted\n");
}

void delete_list(lnodep *p)
{
	if((*p)->next != NULL){
		list_pop(p);
	}
	else
		printf("List is empty");

}
int list_length(lnodep *p)
{
	lnodep q = *p;
	int count = 0;
	do{
		++count;
		q = q->next;
	}
	while(q!= NULL);
	return count;
}


