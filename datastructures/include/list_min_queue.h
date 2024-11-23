#ifndef LIST_MIN_QUEUE_H
#define LIST_MIN_QUEUE_H

typedef struct MinQueue MinQueue;

MinQueue *createQueue();
void enqueue(MinQueue *q, int value, int priority);
int dequeue(MinQueue *q);
int peek(MinQueue *q);
void destroyQueue(MinQueue *q);

#endif
