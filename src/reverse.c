#include "push_swap.h"

void reverserotatea(stack *stack_A)
{
    int top = stack_A->top;
    int tmp = stack_A->array[top];

    for (int i = top; i > 0; i--)
    {
        stack_A->array[i] = stack_A->array[i - 1];
    }

    stack_A->array[0] = tmp;
}

void reverserotateb(stack *stack_B)
{
    int top = stack_B->top;
    int tmp = stack_B->array[top];

    for (int i = top; i > 0; i--)
    {
        stack_B->array[i] = stack_B->array[i - 1];
    }

    stack_B->array[0] = tmp;
}

void rrr(stack *stack_A, stack *stack_B)
{
    reverserotatea(stack_A);
    reverserotateb(stack_B);
}