#include "all.h"

void push_stack(stack_t *stack, int value) {
    if (stack->top < Max_size) {
        ++stack->top;
        stack->data_stack[stack->top] = value;
    } else {
        perror("stack overflow !\n");
    }
}

int pop_stack(stack_t *stack) {
    if (isEmpty(stack)) {
        perror("stack is empty\n");
        exit(EXIT_FAILURE);
    } else {
        return stack->data_stack[stack->top--];
    }
}

void free_stack(stack_t *stack) {
    free(stack);
}