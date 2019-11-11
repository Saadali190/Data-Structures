#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


int
main(void){

  node n;
  if((n = get_listnode()) == NULL){
    perror("Failed to intialize list");
    return -1;
  }
  n->value = 0;

  for(int i=1; i<10; i++){
    if(add_node(n, i) < 0){
      perror("Failed to add new node to list");
      return -1;
    }
  }

  print_list(n);

  node n1;
  if((n1=search_list(n,5)) < 0)
    puts("Could not find the requested number");
  else
    puts("Found");

  if(delete_node(n,n1) < 0) puts("Could not Delete");
  else  puts("Delete Successful");

  print_list(n);

  if((n1=search_list(n,4)) < 0)
    puts("Could not find the requested number");
  else
    puts("Found");

  if(insert_node(n,n1,5) < 0) puts("Could not Insert");
  else  puts("Insertion Successful");

  print_list(n);

  return 0;
}
