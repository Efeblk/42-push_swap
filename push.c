#include "push_swap.h"

void pusha(stack *stack_A, stack *stack_B)
{
    stack_A->array[stack_A->top + 1] = stack_B->array[stack_B->top];
    stack_B->array[stack_B->top] = NULL;
} 

void pushb(stack *stack_B, stack *stack_A)
{
    stack_B->array[stack_B->top + 1] = stack_A->array[stack_A->top];
    stack_A->array[stack_A->top] = NULL;
} 