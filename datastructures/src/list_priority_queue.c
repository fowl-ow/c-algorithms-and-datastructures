#include "../include/list_queue.h"
#include <stdlib.h>

typedef struct Node
{
    int data;
    int priority;
    struct Node *next;
} Node;

typedef struct MinQueue
{
    Node *front;
} MinQueue;

MinQueue *createQueue()
{
    struct MinQueue *q = malloc(sizeof(MinQueue));
    if (q == NULL)
        return NULL;
    q->front = NULL;
    return q;
}

void enqueue(MinQueue *q, int value, int priority)
{
}

int dequeue(MinQueue *q)
{
}

int peek(MinQueue *q)
{
    if (q == NULL || q->front == NULL)
        return -1;
    return q->front->data;
}

void destroyQueue(MinQueue *q)
{
    if (q == NULL)
        return;
    if (q->front != NULL)
    {
        Node *n = q->front;
        while (n->next != NULL)
        {
            Node *d = n;
            n = n->next;
            free(d);
        }
        free(n);
    }
    free(q);
}