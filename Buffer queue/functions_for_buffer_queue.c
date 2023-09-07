#include "head.h"
#define SIZE 10

int buf[SIZE];
int count1 = 0;
int count_element;
int header;
int tail;

init()
{
    int header = 0;
    int tail = 0;
    int count_element = 0;
}

show()
{
    if(count_element == 0)
    {
        printf("buf is empty\n");
    }

    else
    {
        for(int i = 0; i < count_element; i++)
        {
            int cout;
            cout = (tail + i) % SIZE;
            printf("%4d", buf[cout]);
        }
        printf("\n");
    }
}

put(value)
{
    if(count_element==SIZE)
    {
        printf("Queue is over \n");
        return -1;
    }
    buf[header] = value;
    header=(header+1) % SIZE;
    count_element++;
}

get()
{
    int val = buf[tail];
    tail=(tail+1)%SIZE;
    count_element--;
    if(count_element==0)
    {
        printf("Queue is empty \n");
        return -1;
    }
    return val;
}
