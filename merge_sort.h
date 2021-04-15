#include <stdlib.h>
#include <string.h>
#include "linux_list.h"

typedef struct __element {
    char *value;
    struct __element *next;
    struct list_head list;
} list_ele_t;

typedef struct {
    list_ele_t *head; /* Linked list of elements */
    list_ele_t *tail;
    size_t size;
    struct list_head list;
} queue_t;

void list_merge_sort(queue_t *q);