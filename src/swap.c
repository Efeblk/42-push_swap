#include "push_swap.h"
#include <stdio.h>

void swap(stack *stack_A)
{
    int tmp;

    tmp = stack_A->array[stack_A->top];
    stack_A->array[stack_A->top] = stack_A->array[stack_A->top - 1];
    stack_A->array[stack_A->top - 1] = tmp;
}

void swapa(stack *stack_A)
{
    swap(stack_A);
    printf("sa \n");
}

void swapb(stack *stack_A)
{
    swap(stack_A);
    printf("sb \n");
}

void swapswap(stack *stack_A, stack *stack_B)
{
	swapa(stack_A);
	swapb(stack_B);
    printf("ss \n");
}