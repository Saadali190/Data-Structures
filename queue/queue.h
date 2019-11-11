#ifndef __QUEUE_H__
#define __QUEUE_H__

typedef struct queue{
  int* ptr;
  int size;
  int insertions;
}*queue;

queue
initialize_queue(int size);

void
enqueue(queue s, int no);

int
dequeue(queue s);

int
peek(queue s);

#endif
