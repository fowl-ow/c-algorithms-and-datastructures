#ifndef STACK_H
#define STACK_H

typedef struct Stack Stack;

Stack *createStack();
void push(Stack *stack, int value);
int pop(Stack *stack);
int peek(const Stack *stack);
int isEmpty(const Stack *stack);
int size(const Stack *stack);
void destroyStack(Stack *stack);

#endif