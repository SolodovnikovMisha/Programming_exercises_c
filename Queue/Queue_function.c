#include <stdio.h>
#include <stdlib.h>
#include "Queue_function.h"

struct name
{
    int value;
    struct name *next;
};

struct name *header;
struct name *tail;

initialization()
{
    header = NULL;
    tail = NULL;
}

push(val)
{
    if(header == NULL)
    {
        struct name *item = malloc(sizeof(struct name));
        item->value=val;
        item->next=NULL;
        header=item;
        tail=item;
    }
    else
    {
        struct name *item = malloc(sizeof(struct name));
        item -> value=val;
        item -> next=header;
        header = item;
    }
}

int pop()
{
    if(header==NULL)
    {
        return -1;
    }
    else
    {
        int i=tail->value;
        struct name *k=tail;
        struct name *p=NULL;
        for(p=header; p->next!=tail; p=p->next)
        {
        }
        tail=p;
        p->next = NULL;
        free(k);
        return(i);
    }
}

show()
{
    if(header==NULL)
    {
        printf("Queue is empty.\n");
    }
    for(struct name *p=header; p!=NULL; p=p->next)
    {
        printf("%d\t", p->value);
    }
    printf("\n");
}
