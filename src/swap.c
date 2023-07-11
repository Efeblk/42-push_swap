#include "push_swap.h"

void swapa(stack *stack_A)
{
    int tmp;

    tmp = stack_A->array[stack_A->top];
    stack_A->array[stack_A->top] = stack_A->array[stack_A->top - 1];
    stack_A->array[stack_A->top - 1] = tmp;
}

void swapb(stack *stack_A)
{
    int tmp;

    tmp = stack_A->array[stack_A->top];
    stack_A->array[stack_A->top] = stack_A->array[stack_A->top - 1];
    stack_A->array[stack_A->top - 1] = tmp;
}

void swapswap(stack *stack_A, stack *stack_B)
{
	swapa(stack_A);
	swapb(stack_B);
}