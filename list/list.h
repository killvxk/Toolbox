#ifndef LIST_H
#define LIST_H

#include <stddef.h>

struct node {
    struct node *next, *prev;
    void *data;
};

struct list {
    struct node *first, *last;
    size_t size;
};

typedef struct node node_t;
typedef struct list list_t;

/* Initialize a new list */
list_t *list_new(void);
/* Delete the list */
void list_free(list_t *list);

/* Retrive element at specified index */
void *list_get(list_t *list, size_t index);

/* Push a new element at the begining of the list */
void list_push(list_t *list, void *data);
/* Add a new element at the end of the list */
void list_append(list_t *list, void *data);
/* Insert element at a specified index */
void list_insert(list_t *list, size_t index, void *data);

/* Pop the first element of the list */
void *list_pop(list_t *list);
/* Pop the last element of the list */
void *list_strip(list_t *list);
/* Remove element at specified index */
void *list_remove(list_t *list, size_t index);

/* Remove all nodes of the list */
void list_clear(list_t *list);

#endif
