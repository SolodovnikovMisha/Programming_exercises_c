#include <stdio.h>
#include <stdlib.h>
#include "Exercises.h"

void exercise1()
{
    int simbol;
    int amount_tab, amount_space;
    int ns, nl;
    ns = nl = 0;             //ns - Количество символов, nl - количество строк
    amount_tab = amount_space = 0;
    simbol = getchar();
    while((simbol = getchar()) != EOF)
    {
        if(simbol == '\n')
        {
            nl++;
        }
        if(simbol == '\t')
        {
            amount_tab++;
        }
        if(simbol == ' ')
        {
            amount_space++;
        }
        ns++;
    }
    printf("Number of simbols: %2d,\t Numbers of lines: %2d\n", ns, nl);
    printf("amount of tab: %2d,\t amount of space: %2d\n", amount_tab, amount_space);
}

void exercise2()
{
    int simbol;
    int count_of_space = 0;
    simbol = getchar();
    while(simbol != EOF)
    {
        if(simbol != ' ')
        {
            putchar(simbol);
            simbol = getchar();
            count_of_space = 0;
        }
        else
        {
            count_of_space++;
            if(count_of_space == 1)
            {
                putchar(simbol);
                simbol = getchar();
            }
            else
                simbol = getchar();
        }
    }
}

void exercise3()
{
    int simbol;
    while((simbol = getchar()) != EOF)
    {
        if (simbol == '\t')printf("\\t");
        else if (simbol == '\b') printf("\\b");
        else if (simbol == '\\') printf("\\\\");
        else putchar(simbol);
    }
}

void exercise3b()
{
    int simbol;
    while((simbol = getchar()) != EOF)
    {
        switch(simbol)
        {
            case '\t':
                printf("\\t");
            break;
            case '\\':
                printf("\\\\");
            break;
            case '\b':
                printf("\\b");
            break;
            default:
                putchar(simbol);
                break;
        }
    }
}

void exercise4()
{
    int simbol;
    int indicate = 0;
    while((simbol = getchar()) != EOF)
    {
        if(simbol == '\n' || simbol == ' ' || simbol == '\t')
        {
            indicate++;
            if(indicate == 1)
            {
                putchar('\n');
            }
        }
        else
        {
            putchar(simbol);
            indicate = 0;
        }
    }
}


#include <stdio.h>
#include <stdlib.h>
#include "Exercises.h"

#define SIZE 50 //Max size of word.
#define OUT 0
#define IN 1
void exercise5(void)
{
    int buf_of_word[SIZE];
    int count = 0; //Number counter letter in word
    int simbol;
    int indicate = OUT; //indicate current cursor is in or out word.
    while((simbol= getchar()) != EOF)
    {
        if(simbol == '\n' || simbol == '\t' || simbol == ' ')
        {
            if(indicate == IN)
            {
                for(int i = 0; i < count; i++)
                {
                    putchar(buf_of_word[i]);
                }
                putchar('\n');
                count = 0;
            }
            indicate = OUT;
        }
        else
        {
            buf_of_word[count] = '*';
            count++;
            indicate = IN;
        }
    }
}

void exercise5b(void)
{
    int buf_of_word[SIZE][SIZE];
    int count = 0; //Number counter letter of word in buffer
    int simbol;
    int count_of_words = 0;
    int indicate = OUT; //indicate current cursor is in or out word.
    for(int j = 0; j<SIZE; j++)
    {
        for(int i = 0; i<SIZE; i++)
        {
            buf_of_word[i][j] = ' ';
        }
        buf_of_word[0][j] = j + '0';
    }
    while((simbol= getchar()) != EOF)
    {
        if(simbol == '\n' || simbol == '\t' || simbol == ' ')
        {
            if(indicate == IN)
            {
                count_of_words++;
                count = 0;
            }
            indicate = OUT;
        }
        else
        {
            buf_of_word[count + 1][count_of_words] = simbol;
            count++;
            indicate = IN;
        }
    }

    for(int i = 0; i<20; i++)
    {
        for(int j = 0; j<count_of_words; j++)
        {
            putchar(buf_of_word[i][j]);
            printf("  ");
        }
        putchar('\n');
    }
}

void exercise5c(void)
{
    int buf_of_word[SIZE][SIZE];
    int count = 0; //Number counter letter of word in buffer
    int simbol, max_size_of_world, count_of_words;
    int indicate = OUT; //indicate current cursor is in or out word.
    max_size_of_world = count_of_words = 0;
    for(int j = 0; j<SIZE; j++)
    {
        for(int i = 0; i<SIZE; i++)
        {
            buf_of_word[i][j] = ' ';
        }
        buf_of_word[0][j] = j + '0';
    }
    while((simbol= getchar()) != EOF)
    {
        if(simbol == '\n' || simbol == '\t' || simbol == ' ')
        {
            if(indicate == IN)
            {
                int number = 0;
                while(buf_of_word[number][count] != ' ')
                {
                    number++;
                    if(max_size_of_world< number)
                        max_size_of_world = number;
                }
                buf_of_word[number][count] = '*';
                count_of_words++;
                count = 0;
            }
            indicate = OUT;
        }
        else
        {
            count++;
            indicate = IN;
        }
    }

    for(int i = 0; i<20; i++)
    {
        for(int j = 1; j<=count_of_words; j++)
        {
            putchar(buf_of_word[i][j]);
            printf("  ");
        }
        putchar('\n');
    }
}

#define SIZEBUFFER 95 // На диаграмме символ ' ' обозначен как сердечко ;)
void exercise6(void)
{
    int simbol, shift;
    int number_of_star = 0;
    shift = ' ';
    int buf_of_simbols[SIZEBUFFER][SIZEBUFFER];
    for(int i =0; i<SIZEBUFFER; i++)
    {
        for(int j = 0; j<SIZEBUFFER; j++)
        {
            buf_of_simbols[i][j] = ' ';
        }
        buf_of_simbols[i][0] = shift ;
        shift+='!'-' ';
    }
    buf_of_simbols[0][0] = " ";
    while((simbol = getchar())!= EOF)
    {
        while(buf_of_simbols[simbol - ' '][number_of_star] != ' ')
        {
            number_of_star++;
        }
        buf_of_simbols[simbol - ' '][number_of_star] = '*';
        number_of_star = 0;
    }
    for(int i =0; i<SIZEBUFFER; i++)
    {
        for(int j = 0; j<SIZEBUFFER; j++)
        {
            putchar(buf_of_simbols[i][j]);
        }
        putchar('\n');
    }
}


void exercise7(void)
{
   float fahr, celsius;
    int lower, upper, step;
    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    fahr = lower;
    while (fahr <= upper) {
    celsius = exercise7fun(fahr);
    printf ("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
 }
}

int exercise7fun(int fahr)
{
    return ((5.0/9.0) * (fahr-32.0));
}



#define MAXLINE 1000

void exercise8(void)
{
    int len; /* длина текущей строки */
    int max; /* длина максимальной из просмотренных строк */
    char line[MAXLINE]; /* текущая строка */
    char longest[MAXLINE]; /* самая длинная строка */
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
        if (len > 80)
        {
            printf("%s\n", line);
            printf("Size = %1d\n", len);
        }
    }
    if (max > 0) /* была ли хоть одна строка? */
    {
        printf("%s\n", longest);
        printf("Max size = %1d", max);
    }
    return 0;
}

/* getline: читает строку в s, возвращает длину */
int getline(char s[], int lim)
{
    int c, i, j;
    for (i = j = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if(j < lim)
        {
            s[j] = c;
        }
        ++j;
    }
    if (c == '\n')
    {
        s[j] = c;
        ++i;
        ++j;
    }
    s[j] = '\0';
    return i;
}

/* copy: копирует из 'from' в 'to'; to достаточно большой */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
    ++i;
}

#define MYX 1000

void exercise9(void)
{
    char current_line[MYX];
    char reverse_line[MYX];
    int simbol;
    int size_of_line = 0;
    while((simbol = getchar()) != EOF)
    {
        current_line[size_of_line] = simbol;
        if(simbol == '\n')
        {
            for(int j = 0; j < (size_of_line + 1); j++)
            {
                putchar(current_line[j]);
            }
            reverse(reverse_line, current_line, size_of_line + 1);
            size_of_line = -1;
            for(int i = 0; i<MYX; i++)
            {
                current_line[i] = ' ';
                reverse_line[i] = ' ';
            }
        }
        size_of_line++;
    }
}

void reverse(char to[], char from[], int size_of_line)
{
    int j = size_of_line;
    for(int i = 0; i<size_of_line; i++)
    {
        j--;
        to[j] = from[i];
    }
    for(int j = 0; j < size_of_line; j++)
    {
        putchar(to[j]);
    }
    printf("\n");
}
