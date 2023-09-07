#include <stdio.h>
#define SIZE 300
#define SIZE3 10
int main(void)
{
    char text[]="mang likes you man like man";
    char word[]="like";
    int nomer[SIZE3];
    int slova[SIZE3];
    for(int i=0; i<SIZE3-1; i++)
    {
        nomer[i]=0;
        slova[i]=0;
    }
    char g;
    int i=0;
    while(word[i]!='\0')
    {
       g = word [i];
        i++;
    }
    int k = 0;
    int t =0;

    for(int i=0; i<SIZE-1; i++)
    {
        if(text[i]==word[k])
        {
            if(word[k]==g)
            {
                t++;
                slova[t-1]=t;
                nomer[t-1]=i-k+1;
                k=0;
            }
            k++;
        }
        else
        {
            k=0;
        }
    }
    printf("%2s%8s\n", "Номер символа:  ", "Номер слова:");
    for(int i=0; i<SIZE3-1; i++)
    {
        if(nomer[i]==0 && slova!=0)
        {break;}
        printf("%7d%15d\n", nomer[i],slova[i]);
    }
    return 0;
}
