#include "all.h"

node_t* create_node(int data) 
{
    node_t* new_node = (node_t*)malloc(sizeof(node_t));

    if (new_node == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

node_t* insert_front(node_t* head, int data) 
{
    node_t* new_node = create_node(data);
    new_node->next = head;
    return new_node;
}

node_t* insert_back(node_t* head, int data) 
{
    node_t* new_node = create_node(data);
    if (head == NULL) {
        return new_node;
    }
    node_t* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}

node_t* insert_index(node_t* head, int data, int position) 
{
    node_t* new_node = create_node(data);

    if (position > count_node(head)) {
        fprintf(stderr, "List too short.\n");
        return head;
    }
    if (position == 0) {
        new_node->next = head;
        return new_node;
    }
    node_t* current = head;
    for (int i = 0; current != NULL && i < position - 1; i++) {
        current = current->next;
    }
    if (current != NULL) {
        new_node->next = current->next;
        current->next = new_node;
    } else {
        free(new_node);
    }
    return head;
}

node_t* delete_node(node_t* head, int data) 
{
    node_t* current = head;
    node_t* previous = NULL;

    while (current != NULL) {
        if (current->data == data) {
            if (previous != NULL) {
                previous->next = current->next;
            } else {
                head = current->next;
            }
            free(current);
            return head;
        }
        previous = current;
        current = current->next;
    }
    return head;
}

node_t* delete_first_node(node_t* head) 
{
    if (head == NULL) {
        return NULL;
    }
    node_t* temp = head;
    head = head->next;
    free(temp);
    return head;
}

node_t* delete_last_node(node_t* head)
{
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    node_t* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    node_t* temp = current->next;
    current->next = NULL;
    free(temp);
    return head;
}

void free_list(node_t* head) 
{
    while (head != NULL) {
        node_t* temp = head;
        head = head->next;
        free(temp);
    }
}