#include "all.h"

node_t* search_node(node_t* head, int data) 
{
    node_t* current = head;
    bool found = false;
    int count = 0;

    while (current != NULL) {
        count++;
        if (current->data == data) {
            found = !found;
            printf("Found: %d at index %d\n", current->data, count);
            return current;
        }
        current = current->next;
    }
    if (!found) {
        printf("Element : %d not found in List.\n", data);
    }
    return NULL;
}

int count_node(node_t *head) 
{
    node_t* current = head;
    int count = 0;

    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void print_list(node_t* head) 
{
    node_t* current = head;

    printf("List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}