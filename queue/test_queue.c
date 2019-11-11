#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int
main(void){
  queue s = initialize_queue(10);

  for(int i = 0; i < s->size; i++ ){
    enqueue(s,i);

  printf("ins %d: %d\n",i,s->insertions);
}

  printf("peek: %d\n",peek(s));

  printf("ins: %d\n",s->insertions);

  printf("dequeue:\t");
  for(int i=0; i<s->size; i++)
    printf("%d\t",dequeue(s));

  puts(" ");

return 0;
}
