#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

int loadstack(stack *stack_A, int argc, char const *argv[])
{
    stack_A->array = (int *)malloc(argc * sizeof(int));

    if (stack_A->array == NULL)
    {
        printf("Memory allocation failed.\n");
        return -1; // Indicate failure with a non-zero value
    }

    stack_A->size = argc;
    stack_A->top = argc - 1;

    int i = 0;
    while (i < argc)
    {
        stack_A->array[i] = atoi(argv[i + 1]);
        i++;
    }

    return 0; // Indicate success with 0
}

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        printf("No elements provided.\n");
        return 0;
    }

    stack stack_A;
    if (loadstack(&stack_A, argc - 1, argv) == 0)
    {
        printf("Stack A: ");
        for (int i = 0; i < stack_A.size; i++)
        {
            printf("%d ", stack_A.array[i]);
        }
        printf("\n");

        rotateA(&stack_A);

        printf("Stack A after swap: ");
        for (int i = 0; i < stack_A.size; i++)
        {
            printf("%d ", stack_A.array[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Error: Memory allocation failed.\n");
    }

    free(stack_A.array);
    return 0;
}

