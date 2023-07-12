#include "push_swap.h"
#include <stdio.h>

void insertionSort(stack *stack_A, stack *stack_B)
{
    int size = stack_A->size;

    if(size == 2)
        size2(stack_A);
    else if(size == 3)
        size3(stack_A);
    else if(size == 4)
        size4(stack_A, stack_B);
	else if (size >= 5)
	{
		radix();
	}
	
}

void size2(stack *stack_A)
{
    if(stack_A->array[stack_A->top] > stack_A->array[stack_A->top - 1])
        swapa(stack_A);
}

void size3(stack *stack_A)
{
    int max;
    max = findmax(stack_A);
    if(max == 0)
        size2(stack_A);
    else if(max == 1)
    {
        reverserotatea(stack_A);
        size2(stack_A);
    }
    else if(max == 2)
    {
        rotateA(stack_A);
        size2(stack_A);
    }

}

void size4(stack *stack_A, stack *stack_B)
{
    int max;

    max = findmax(stack_A);

    if(max == 0)
    {
        reverserotatea(stack_A);
        pushandsort(stack_A,stack_B);
    }
    if(max == 1)
    {
        rotateA(stack_A);
        rotateA(stack_A);
        pushandsort(stack_A,stack_B);
    }
    if(max == 2)
    {
        rotateA(stack_A);
        pushandsort(stack_A,stack_B);
    }
    if(max == 3)
    {
        pushandsort(stack_A,stack_B);
    }
}

void pushandsort(stack *stack_A, stack *stack_B)
{
    pushb(stack_B,stack_A);
    size3(stack_A);
    pusha(stack_A,stack_B);
    rotateA(stack_A);
}

int findmax(stack *stack_A)
{
    int i;
    int max;
    int maxindex;

    i = 0;
    maxindex = 0;
    max = stack_A->array[0];

    while (i < stack_A->size)
    {
        if (stack_A->array[i] > max)
        {
            max = stack_A->array[i];
            maxindex = i;
        }
        i++;
    }
    //printf("max index is: %d", maxindex);
    return (maxindex);
}
