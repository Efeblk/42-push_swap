#include "push_swap.h"

void rotateA(stack *stack_A)
{
    int top = stack_A->top;
    int tmp = stack_A->array[0];

    for (int i = 0; i < top; i++)
    {
        stack_A->array[i] = stack_A->array[i + 1];
    }

    stack_A->array[top] = tmp;
}


void rotateB(stack *stack_B)
{
    int top = stack_B->top;
    int tmp = stack_B->array[0];

    for (int i = 0; i < top; i++)
    {
        stack_B->array[i] = stack_B->array[i + 1];
    }

    stack_B->array[top] = tmp;
    
}

void rr(stack *stack_A, stack *stack_B)
{
    rotateA(stack_A);
    rotateB(stack_B);
}
