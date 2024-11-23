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
	if (arr == NULL)
		return;
	if (arr->size >= arr->capacity)
	{
		int new_capacity = arr->capacity * 2;
		int *new_data = realloc(arr->data, sizeof(int) * new_capacity);
		if (new_data == NULL)
			return;
		arr->data = new_data;
		arr->capacity = new_capacity;
	}
	arr->data[arr->size++] = value;
}

int get(const DynamicArray *arr, int index)
{
	if (arr == NULL)
		return -1;
	if (arr->size == 0 || index >= arr->size)
		return -1;
	return arr->data[index];
}

void set(DynamicArray *arr, int index, int value)
{
	if (arr == NULL || index < 0 || index >= arr->size)
		return;
	arr->data[index] = value;
}

int size(const DynamicArray *arr)
{
	if (arr == NULL)
		return -1;
	return arr->size;
}

int capacity(const DynamicArray *arr)
{
	if (arr == NULL)
		return -1;
	return arr->capacity;
}

void removeAt(DynamicArray *arr, int index)
{
	if (arr == NULL || index < 0 || index >= arr->size)
		return;
	if (arr->size - 1 <= arr->capacity / 4)
	{
		int new_capacity = arr->capacity / 2;
		int *new_data = realloc(arr->data, sizeof(int) * new_capacity);
		if (new_data == NULL)
			return;
		arr->data = new_data;
		arr->capacity = new_capacity;
	}
	for (index; index < arr->size - 1; index++)
	{
		arr->data[index] = arr->data[index + 1];
	}
	arr->size--;
}

void destroyArray(DynamicArray *arr)
{
}
