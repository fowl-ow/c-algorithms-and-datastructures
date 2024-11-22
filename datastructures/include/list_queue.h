#ifndef LIST_QUEUE_H
#define LIST_QUEUE_H

typedef struct Queue Queue;

Queue* createQueue();
void enqueue(Queue* q, int value);
int dequeue(Queue* q);
int peek(Queue* q);
void destroyQueue(Queue* q);


#endif