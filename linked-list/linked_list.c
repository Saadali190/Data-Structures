#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

node
get_listnode(){
  node n = malloc(sizeof(struct list));
  if(n == NULL){
    return NULL;
  }
  n->value = 0;

  return n;
}

_Bool
hasnext(node n){
  if( n == NULL){
    puts("Please enter valid node pointers");
    return false;
  }

  if(n->next == NULL)
    return false;
  else
    return true;
}

int
add_node(node head, int no){                  // Add node at the end of list
  if(head == NULL){
    puts("Please enter valid node pointers");
    return -1;
  }

  node n = head;
  while(hasnext(n))
    n=n->next;
  n->next = get_listnode();
  if(n->next == NULL)
    return -1;

  n->next->value = no;
  return 0;
}

int
insert_node(node head, node pos, int no){
  node n1 = head;

  if(pos == NULL || head == NULL){
    puts("Please enter valid node pointers");
    return -1;
  }

  if(!hasnext(pos)){
      pos->next = get_listnode();
      pos->next->value = no;
      return 0;
  }

  while(n1){
    if(n1 == pos){
      n1 = n1->next;
      pos->next = get_listnode();
      pos->next->next = n1;
      pos->next->value = no;
      return 0;
    }
    n1=n1->next;
  }

  return -1;
}

int
delete_node(node head, node n){

  if(n == NULL || head == NULL){
    puts("Please enter valid node pointers");
    return -1;
  }

  node n1 = head;
  while(n1){

    if(n1 == n){

      if(!hasnext(n1)){    // if given node is the last one
        free(n1);
        return 0;
      }

      n1 = n->next;
      n->value = n1->value;
      n->next = NULL;
      if(hasnext(n1)){
        n->next = n1->next;
      }
      free(n1);
      return 0;
    }

    n1= n1->next;
  }

  return -1;
}

node
search_list(node head, int no){
  if(head == NULL){
    puts("Please enter valid node pointers");
    return NULL;
  }

  if(head->value == no)
    return head;

  node n = head;
  while(hasnext(n)){
    n = n->next;
    if(n->value == no)
      return n;
  }

  return NULL;
}

void
print_list(node n){
  node n1 = n;
  do{
    printf("%d\t",n1->value);
    n1 = n1->next;
  }while(n1);
  puts("");
}
