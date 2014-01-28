#include <stdio.h>
#include "list.h"
int main()
{
	lnode first;
	list_init(&first);
	list_push(&first,(void*)1);
	list_push(&first,(void*)2);
	list_push(&first,(void*)3);
	list_push(&first,(void*)4);
	list_push(&first,(void*)5);
	list_push(&first,(void*)6);
	list_push(&first,(void*)7);
	printf("%d \n",list_length(&first));
	delete_list(&first);
	return 0;
}