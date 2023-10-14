#include "all.h"

void print_stack(stack_t *stack) {
    if (stack->top < 0) {
        perror("stack is empty\n");
        return;
    }
    for (int i = stack->top; i != -1; i--) {
        printf("|");
        printf("%d|\n", stack->data_stack[i]);
    }
}

int peek_stack(stack_t *stack) {
    if (isEmpty(stack)) {
        printf("stack is empty\n");
        exit(EXIT_FAILURE);
    } else {
        return stack->data_stack[stack->top];
    }
}