#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

struct list{
  struct list *next;
  int value;
};

typedef struct list* node;

node
get_listnode();

int
add_node(node head, int no);

int
insert_node(node head, node pos, int no);

int
delete_node(node head, node n);

node
search_list(node head, int n0);

void
print_list(node n);


#endif
