#include "push_swap.h"

void rotateA(stack *stack_A)
{
    int tmp;
    int i;
    i = 0;
    while(i++ < (stack_A->size / 2))
    {
        tmp = stack_A->array[i];
        stack_A->array[i] = stack_A->array[stack_A->top];
        stack_A->array[stack_A->top] = tmp;
    }
}

void rotateB(stack *stack_B)
{
    int tmp;
    int i;
    i = 0;
    while(i++ < (stack_B->size / 2))
    {
        tmp = stack_B->array[i];
        stack_B->array[i] = stack_B->array[stack_B->top];
        stack_B->array[stack_B->top] = tmp;
    }
    
}

void rr(stack *stack_A, stack *stack_B)
{
    
}