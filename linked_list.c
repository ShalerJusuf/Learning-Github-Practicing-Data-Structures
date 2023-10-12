struct node {
    int value;
    struct node *next;
};
PUBLIC struct node *first = NULL;


struct node *add_to_list(struct node *list, int n) {
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if(new_node == NULL)
        exit(EXIT_FAILURE);

    new_node->value = n;
    new_node->next = list;
    return new_node;
}

struct node *search_list(struct node *list, int n) {
    while(list != NULL && list->value != n)
        list = list->next;

    return list;
}


