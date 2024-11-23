#include "../include/stack.h"
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
} Node;

typedef struct Stack
{
	Node *top;
} Stack;

Stack *createStack()
{
	Stack *stack = malloc(sizeof(Stack));
	stack->top = NULL;
	return stack;
}

void push(Stack *stack, int value)
{
	if (stack == NULL)
		return;
	Node *n = malloc(sizeof(Node));
	if (n == NULL)
		return;
	n->data = value;
	n->next = stack->top;
	stack->top = n;
}

int pop(Stack *stack)
{
	if (stack == NULL)
		return -1;
	if (stack->top == NULL)
		return -1;
	int data = stack->top->data;
	stack->top = stack->top->next;
	return data;
}

int peek(const Stack *stack)
{
	if (stack == NULL)
		return -1;
	if (stack->top == NULL)
		return -1;
	return stack->top->data;
}

int isEmpty(const Stack *stack)
{
	if (stack == NULL) return -1;
	if (stack->top == NULL) return 1;
	return 0;
}

int size(const Stack *stack)
{
	if (stack == NULL) return -1;
	int counter = 0;
	Node *current = stack->top;
	while (current != NULL) {
		current = current->next;
		counter++;
	}
	return counter;
}

void destroyStack(Stack *stack)
{
	if (stack == NULL)
		return;
	Node *current = stack->top;
	while (current != NULL)
	{
		Node *prev = current;
		current = current->next;
		free(prev);
	}
	free(stack);
}
