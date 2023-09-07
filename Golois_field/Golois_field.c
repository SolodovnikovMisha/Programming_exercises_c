#include "Golois_field.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define LINES 10
#define COLUMNS 10

int field[LINES][COLUMNS];
int field2[LINES][COLUMNS];
int neighbor_counter = 0;

void init(void)
{   srand(time(NULL));
    for(int i= 0; i<LINES; i++)
    {
        for(int j = 0; j<COLUMNS; j++)
        {
            field[i][j] = rand() % 2;
        }
    }
}

void show(void)
{
    printf("%3d",field[LINES-1][COLUMNS-1]);
    printf(" |");
    for(int j = 0; j<COLUMNS; j++)
    {
        printf("%3d",field[LINES -1][j]);
    }
    printf(" |");
    printf("%2d",field[LINES-1][0]);
    printf("\n");
    printf("  -------------------------------------\n");
    for(int i= 0; i<LINES; i++)
    {
        printf("%3d",field[i][COLUMNS - 1]);
        printf(" |");
        for(int j = 0; j<COLUMNS; j++)
        {
            printf("%3d",field[i][j]);
        }
        printf(" |");
        printf("%2d",field[i][0]);
        printf("\n");
    }
    printf("  -------------------------------------\n");
    printf("%3d",field[0][COLUMNS-1]);
    printf(" |");
    for(int j = 0; j<COLUMNS; j++)
    {
        printf("%3d",field[0][j]);
    }
    printf(" |");
    printf("%2d",field[0][0]);
    printf("\n");
    printf("\n");
    printf("\n");
}

void top_line(int x, int y)
{
    int f1 = (x + 1) % LINES;
    for(int j = y-1; j<=y+1; j++)
    {
        if(field[f1][j] == 1)
        {
            neighbor_counter++;
        }
    }
}

void buttom_line(int x, int y)
{
    int f2 = (x + LINES - 1) % LINES;
    for(int j = y-1; j<=y+1; j++)
    {
        if(field[f2][j] == 1)
        {
            neighbor_counter++;
        }
    }
}

void left_column(int x, int y)
{
    int f3 = (y + 1) % COLUMNS;
    if(field[x][f3] == 1)
    {
        neighbor_counter++;
    }
}

void right_column(int x, int y)
{
    int f4 = (y + COLUMNS - 1) % COLUMNS;
    if(field[x][f4] == 1)
    {
        neighbor_counter++;
    }
}

void cell_state(int x, int y)
{
    top_line(x,y);
    buttom_line(x,y);
    left_column(x,y);
    right_column(x,y);
    if(field[x][y] == 1)
    {
        if(neighbor_counter < 2 || neighbor_counter > 3)
        {
            field2[x][y] = 0;
        }
        else
        {
            field2[x][y] = 1;
        }
    }
    else
    {
        if(neighbor_counter == 3)
        {
           field2[x][y] = 1;
        }
    }
    neighbor_counter = 0;
}

void array_conversion(void)
{
    for(int i= 0; i<LINES; i++)
    {
        for(int j = 0; j<COLUMNS; j++)
        {
            cell_state(i,j);
        }
    }
    for(int i= 0; i<LINES; i++)
    {
        for(int j = 0; j<COLUMNS; j++)
        {
            field[i][j] = field2[i][j];
        }
    }
}
