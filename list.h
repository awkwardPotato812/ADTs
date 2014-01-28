#ifndef _LIST_H
#define _LIST_H

typedef struct lnode lnode;
typedef lnode *lnodep;

struct lnode{
	void *element;
	lnodep next;
};

void list_init(lnodep*);
void list_push(lnodep*,void*);
void list_pop(lnodep*);
void delete_list(lnodep*);
int list_length(lnodep*);

#endif