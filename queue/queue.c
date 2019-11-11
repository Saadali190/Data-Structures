#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"


queue
initialize_queue(int size){
    queue s = (queue)malloc(sizeof(queue));
    s->ptr = (int*)malloc(size*sizeof(int));
    s->size = size;
    s->insertions = 0;
    return s;
}


void
enqueue(queue s, int no){
    if(s->insertions >= s->size){
      perror("queue Overflow");
      exit(1);
    }
      s->ptr[s->insertions++]=no;
}

int
dequeue(queue s){
    if(s->insertions <= 0){
      perror("Empty queue");
      exit(1);
    }

  int no= s->ptr[0];

  for(int i=0;i<s->insertions-1; i++){
    s->ptr[i] = s->ptr[i+1];
  }
  s->insertions--;
  return no;
}

int
peek(queue s){
    if(s->insertions <= 0){
      perror("Empty queue");
      exit(1);
    }
    return (s->ptr[0]);
}
