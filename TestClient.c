#include "Base.h"
#include <stdio.h>
#include <stdlib.h>
#include "type_changes.h" //includes static defined as PRIVATE
#include "arraystack.c" //includes <stdbool.h> and stack.h
#include "linked_list.c"

//just macro practice
//that may not be good practice
#define PRINT_INT(n) printf(#n " = %d\n", n)

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}
GENERIC_MAX(int)
GENERIC_MAX(float)
GENERIC_MAX(double)

int main(int argc, char *argv[]) {

    /*GENERIC_MAX calls*/
    int the_int = int_max(23, 12);
    float the_float = float_max(23.2, 123.1);
    double the_double = double_max(231.122312, 231.123123);
    /*basic arraystack client interaction*/
    int x = 0;
    printf("hello, client\n");
    stack_array_push(20);

    x = stack_array_pop();
    printf("%d \n", x);
    PRINT_INT(x);

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



    /*just linked list*/
    first = add_to_list(first, 20);
    first = add_to_list(first, 13);
    first = add_to_list(first, 123);

    struct node *cache;
    cache = search_list(first, 20);
    if(cache == NULL)
        exit(EXIT_FAILURE);
    printf("%d ", cache->value);

    cache = search_list(first, 123);
    if(cache == NULL)
        exit(EXIT_FAILURE);
    printf("%d ", cache->value);
    /*
    since our list has only one value it could make since to just pass it.
    by returing from search_list list->value(would it still return NULL properly?)
    but I dont think its likely in real programs to have a 1 value linked list.
    */

    /*end of linked list*/

    /*linked list stack test*/


}


