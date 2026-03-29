#include <stdio.h>

    /* Move to (pos-1)th node */
    for (i = 1; i < pos - 1 && cur != NULL; i++) {
        cur = cur->next;
    }

    /* If position invalid */
    if (cur == NULL) {
        printf("No such position in SLL so insertion is not possible\n");
        free(temp);
        return first;
    }

    /* Insert node */
    temp->next = cur->next;
    cur->next = temp;

    return first;
}

/* Traverse and display list */
void traverseList(NODE first) {

    NODE temp = first;

    if (first == NULL) {
        printf("Single Linked List is empty\n");
        return;
    }

    

    while (temp != NULL) {
        printf("%d --> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

