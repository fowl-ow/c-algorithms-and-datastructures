#include "../include/list_min_queue.h"
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
    if (q == NULL)
        return;
    Node *n = malloc(sizeof(Node));
    if (n == NULL)
        return;
    n->data = value;
    n->priority = priority;
    n->next = NULL;

    if (q->front == NULL || q->front->priority > priority)
    {
        n->next = q->front;
        q->front = n;
    }
    else
    {
        Node *current = q->front;
        while (current->next != NULL && current->next->priority <= priority)
        {
            current = current->next;
        }
        n->next = current->next;
        current->next = n;
    }
}

int dequeue(MinQueue *q)
{
    if (q == NULL || q->front == NULL)
        return -1;
    Node *n = q->front;
    if (n->next == NULL)
    {
        q->front = NULL;
    }
    else
    {
        q->front = n->next;
    }
    int data = n->data;
    free(n);
    return data;
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
