#include "../include/list_queue.h"
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

struct Queue
{
    Node *front;
    Node *rear;
};

Queue *createQueue()
{
    struct Queue *q = malloc(sizeof(struct Queue));
    if (q == NULL) return NULL;
    q->front = NULL;
    q->rear = NULL;
    return q;
}

void enqueue(Queue *q, int value)
{
    if (q == NULL)
        return;
    Node *n = malloc(sizeof(Node));
    if (n == NULL) return;
    n->data = value;
    n->next = NULL;
    if (q->front == NULL && q->rear == NULL)
    {
        q->front = n;
        q->rear = n;
    }
    else
    {
        q->rear->next = n;
        q->rear = n;
    }
}

int dequeue(Queue *q)
{
    if (q == NULL || q->front == NULL)
        return -1;

    Node *n = q->front;
    if (n->next == NULL)
    {
        q->front = NULL;
        q->rear = NULL;
    }
    else
    {
        q->front = n->next;
    }
    int data = n->data;
    free(n);
    return data;
}

int peek(Queue *q)
{
    if (q == NULL || q->front == NULL)
        return -1;
    return q->front->data;
}

void destroyQueue(Queue *q)
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