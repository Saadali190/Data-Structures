#ifndef __STACK_H__
#define __STACK_H__

typedef struct stack{
  int* ptr;
  int size;
  int insertions;
}*stack;

stack
initialize_stack(int size);

void
push(stack s, int no);

int
pop(stack s);

int
top(stack s);

#endif
