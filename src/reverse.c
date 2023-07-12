#include "push_swap.h"
#include <stdio.h>

void reverserotate(stack *stack_A)
{
    int top = stack_A->top;
    int tmp = stack_A->array[0];

    int i = 0;
    while (i < top) {
        stack_A->array[i] = stack_A->array[i + 1];
        i++;
    }

    stack_A->array[top] = tmp;
}

void reverserotatea(stack *stack_A)
{
    reverserotate(stack_A);
    printf("rsa \n");
}

void reverserotateb(stack *stack_A)
{
    reverserotate(stack_A);
    printf("rsb \n");
}

void rrr(stack *stack_A, stack *stack_B)
{
    reverserotatea(stack_A);
    reverserotateb(stack_B);
    printf("rrr \n");
}