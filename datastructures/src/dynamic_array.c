#include "../include/dynamic_array.h"
#include <stdlib.h>

typedef struct DynamicArray
{
	int *data;
	int size;
	int capacity;
} DynamicArray;

DynamicArray *createArray(int capacity)
{
	DynamicArray *arr = malloc(sizeof(DynamicArray));
	if (arr == NULL)
		return NULL;
	arr->data = malloc(sizeof(int) * capacity);
	if (arr->data == NULL)
	{
		free(arr);
		return NULL;
	}
	arr->size = 0;
	arr->capacity = capacity;
	return arr;
}

void add(DynamicArray *arr, int value)
{
}

int get(const DynamicArray *arr, int index)
{
}

void set(DynamicArray *arr, int index, int value)
{
}

int size(const DynamicArray *arr)
{
}

int capacity(const DynamicArray *arr)
{
}

void removeAt(DynamicArray *arr, int index)
{
}

void destroyArray(DynamicArray *arr)
{
}
