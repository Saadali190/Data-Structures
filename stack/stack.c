#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"


stack
initialize_stack(int size){
    stack s = (stack)malloc(sizeof(stack));
    s->ptr = (int*)malloc(size*sizeof(int));
    s->size = size;
    s->insertions = 0;
    return s;
}


void
push(stack s, int no){
    if(s->insertions >= s->size){
      perror("Stack Overflow");
      exit(1);
    }
      s->ptr[s->insertions++]=no;
}

int
pop(stack s){
    if(s->insertions <= 0){
      perror("Empty Stack");
      exit(1);
    }

    return (s->ptr[--s->insertions]);
}

int
top(stack s){
    if(s->insertions <= 0){
      perror("Empty Stack");
      exit(1);
    }
    return (s->ptr[s->insertions-1]);
}
