#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>

typedef struct stack
{
    int *array;
    int top; //top
    int size;
} stack;

// Function prototypes
void swapa(stack *stack_A);
void swapb(stack *stack_A);
void swapswap(stack *stack_A, stack *stack_B);

void rotateA(stack *stack_A);
void rotateB(stack *stack_B);
void rr(stack *stack_A, stack *stack_B);

void reverserotatea(stack *stack_A);
void reverserotateb(stack *stack_B);
void rrr(stack *stack_A, stack *stack_B);

#endif
