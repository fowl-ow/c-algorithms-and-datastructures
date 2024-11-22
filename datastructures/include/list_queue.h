#ifndef QUEUE_H
#define QUEUE_H

typedef struct Queue Queue;

Queue* createQueue();
void enqueue(Queue* q, int value);
int dequeue(Queue* q);
void destroyQueue(Queue* q);

#endif