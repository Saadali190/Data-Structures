#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int
main(void){
  stack s = initialize_stack(10);

  for(int i = 0; i < s->size; i++ ){
    push(s,i);

  printf("ins %d: %d\n",i,s->insertions);
}

  printf("top: %d\n",top(s));

  printf("ins: %d\n",s->insertions);

  printf("pop:\t");
  for(int i=0; i<s->size; i++)
    printf("%d\t",pop(s));

  puts(" ");

return 0;
}
