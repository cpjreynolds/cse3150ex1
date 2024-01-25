#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

struct node {
    int data;
    node* next;
};

node* build_new_linked_list(int nelts);

int get_linked_list_data_item_value(node* start, int index, int nelts);

void print_linked_list(node* start, int nelts);

bool update_data_in_linked_list(node* start, int index, int value, int nelts);

#endif
