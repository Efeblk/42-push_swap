#include "push_swap.h"
#include <stdio.h>

void rotate(stack *stack_A)
{
    int top = stack_A->top;
    int tmp = stack_A->array[top];

    int i = top;
    while (i > 0) {
        stack_A->array[i] = stack_A->array[i - 1];
        i--;
    }

    stack_A->array[0] = tmp;
}

void rotateA(stack *stack_A)
{
    rotate(stack_A);
    printf("ra \n");
}


void rotateB(stack *stack_A)
{
    rotate(stack_A);
    printf("rb \n");
    
}

void rr(stack *stack_A, stack *stack_B)
{
    rotateA(stack_A);
    rotateB(stack_B);
    printf("rr \n");
}
