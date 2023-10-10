#include "Base.h"
#include <stdio.h>
#include <stdlib.h>
#include "type_changes.h" //includes static defined as PRIVATE
#include "arraystack.c" //includes <stdbool.h> and stack.h


int main(int argc, char *argv[]) {

    /*basic arraystack client interaction*/
    int x = 0;
    printf("hello, client\n");
    stack_array_push(20);

    x = stack_array_pop();
    printf("%d \n", x);

    bool check;
    check = stack_array_is_full();
    if(check == true)
        printf("stack is full\n");
    else {
        printf("stack is not full\n");
        stack_array_push(20);
        stack_array_push(12);
        stack_array_push(14);
        stack_array_push(13);
        stack_array_push(11);
    }

    while(stack_array_is_empty() == false) {
        int y = 0;
        y = stack_array_pop();
        printf("y = %d\n", y);
    }
    /*end of arraystack tests*/



    /*linked list version*/


}
