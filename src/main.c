#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void mallocstack(stack *stack_A, int size)
{
    stack_A->array = (int *)malloc(size * sizeof(int));
    stack_A->size = 0;
    stack_A->top = -1;
}

int loadstack(stack *stack_A, int argc, char const *argv[])
{
    mallocstack(stack_A, argc - 1);

    if (stack_A->array == NULL)
    {
        printf("Memory allocation failed.\n");
        return -1; // Indicate failure with a non-zero value
    }
    stack_A->size = argc -1;
    stack_A->top = argc - 2;

    int i = 0;
    while (i < argc - 1)
    {
        stack_A->array[i] = ft_atoi(argv[i + 1]);
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
    stack stack_B;

    mallocstack(&stack_A, argc - 1);
    mallocstack(&stack_B, argc - 1);

    if (loadstack(&stack_A, argc, argv) == 0)
    {
        printf("Stack A: ");
        for (int i = 0; i < stack_A.size; i++)
        {
            printf("%d ", stack_A.array[i]);
        }
        printf("\n");

        printf("Stack B: ");
        for (int i = 0; i < stack_B.size; i++)
        {
            printf("%d ", stack_B.array[i]);
        }
        printf("\n");

        insertionSort(&stack_A, &stack_B);

        printf("Stack A after sort: ");
        for (int i = 0; i < stack_A.size; i++)
        {
            printf("%d ", stack_A.array[i]);
        }
        printf("\n");

        printf("Stack B after sort: ");
        for (int i = 0; i < stack_B.size; i++)
        {
            printf("%d ", stack_B.array[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Error: Memory allocation failed.\n");
    }

    free(stack_A.array);
    free(stack_B.array);
    return 0;
}
