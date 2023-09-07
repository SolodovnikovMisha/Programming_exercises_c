#include <stdio.h>
#include <stdlib.h>
#include "Head.h"

struct name
{
    int value;
    struct name *next;
};

struct name *header;

initialization()
{
    header = NULL;
}

push(val)
{
    struct name *item = malloc(sizeof(struct name));
    item -> value=val;
    item -> next=header;
    header = item;
}

int pop()
{
    if(header==NULL)
    {
        return(-1);
    }
    else
    {
        int i=header->value;
        struct name *p=header;
        header=header->next;
        free(p);
        return(i);
    }
}

show()
{
    if(header==NULL)
    {
        printf("Стек пуст.\n");
    }
    for(struct name *p=header; p!=NULL; p=p->next)
    {
        printf("%d\t", p->value);
    }
    printf("\n");
}
