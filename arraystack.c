#include <stdbool.h>
#include "arraystack.h"

#define STACK_SIZE 100

PRIVATE int contents[STACK_SIZE];
PRIVATE int top = 0;

static void terminate(const char *message) {
    printf("%s", message);
    exit(EXIT_FAILURE);
}

bool stack_array_is_empty(void) {
    return top == 0;
}
bool stack_array_is_full(void) {
    return top == STACK_SIZE;
}

void stack_array_make_empty(void) {
    top = 0;
}


void stack_array_push(int i) {
    if(stack_array_is_full())
        terminate("Error in push: Stack is full");

    contents[top++] = i;
}

int stack_array_pop(void) {
    if(stack_array_is_empty())
        terminate("Error in pop: stack is empty");

    return contents[--top];
}
