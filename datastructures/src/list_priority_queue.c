#include "../include/list_queue.h"
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct MinQueue
{
    Node *front;
} MinQueue;

MinQueue *createQueue()
{
}

void enqueue(MinQueue *q, int value)
{
}

int dequeue(MinQueue *q)
{
}

int peek(MinQueue *q)
{
}

void destroyQueue(MinQueue *q)
{
}