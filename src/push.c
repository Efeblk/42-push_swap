#include "push_swap.h"
#include <stdio.h>

void push(stack *stack_A, stack *stack_B)
{
    if (stack_B->top < 0)
    {
        printf("Error: Stack B is empty.\n");
        return;
    }

    stack_A->top += 1;
    stack_A->size += 1;
    stack_A->array[stack_A->top] = stack_B->array[stack_B->top];
    stack_B->top -= 1;
    stack_B->size -= 1;
} 

void pusha(stack *stack_A, stack *stack_B)
{
    push(stack_A,stack_B);
    printf("pa \n");
} 

void pushb(stack *stack_B, stack *stack_A)
{
    push(stack_B,stack_A);
    printf("pb \n");
} 
