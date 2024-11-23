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

}

void add(DynamicArray *array, int value)
{
}

int get(const DynamicArray *array, int index)
{
}

void set(DynamicArray *array, int index, int value)
{
}

int size(const DynamicArray *array)
{
}

int capacity(const DynamicArray *array)
{
}

void removeAt(DynamicArray *array, int index)
{
}

void destroyArray(DynamicArray *array)
{
}
