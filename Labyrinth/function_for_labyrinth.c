#include <stdio.h>
#include <stdlib.h>
#define LINES 10
#define COLUMNS 10
int mas[LINES][COLUMNS]=
   {
        { 0, -1, -1, -1, -1, -1, -1, -1,  0, -1 },
        { 0, -1,  0,  0,  0,  0,  0, -1,  0, -1 },
        { 0, -1,  0, -1, -1, -1,  0,  0,  0, -1 },
        { 0, -1,  0, -1, -1, -1,  0,  0, -1, -1 },
        { 0,  0,  0, -1,  0,  0, -1,  0, -1,  0 },
        {-1, -1, -1,  0,  0,  0,  0,  0,  0,  0 },
        {-1,  0,  0,  0, -1, -1, -1, -1, -1, -1 },
        { 0, -1, -1,  0, -1,  0, -1,  0, -1,  0 },
        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
        { 0, -1, -1, -1, -1, -1, -1, -1,  0, -1 },
   };
int move_counter = 0;
int x_of_entrance = 5;
int y_of_entrance = 0;
int x_of_exit = 7;
int y_of_exit = 9;


void definition_of_neighbors(void)
{
    if(x_of_entrance>0 && mas[x_of_entrance-1][y_of_entrance]==0)
   {
       move_counter++;
       mas[x_of_entrance-1][y_of_entrance] = move_counter;
       x_of_entrance -= 1;
   }
   else
   {
       if(x_of_entrance<LINES-1 && mas[x_of_entrance+1][y_of_entrance]==0)
        {
            move_counter++;
            mas[x_of_entrance+1][y_of_entrance] = move_counter;
            x_of_entrance+=1;
        }
        else
        {
            if(y_of_entrance>0 && mas[x_of_entrance][y_of_entrance-1]==0)
            {
                move_counter++;
                mas[x_of_entrance][y_of_entrance-1] = move_counter;
                y_of_entrance-=1;
            }
            else
            {
                if(x_of_entrance<COLUMNS-1 && mas[x_of_entrance][y_of_entrance+1]==0)
                {
                    move_counter++;
                    mas[x_of_entrance][y_of_entrance+1] = move_counter;
                    y_of_entrance+=1;
                }
                else
                {
                       mas[x_of_entrance][y_of_entrance] = -2;
                        if(x_of_entrance>0 && mas[x_of_entrance-1][y_of_entrance]==move_counter-1)
                        {
                            x_of_entrance -=1;
                            mas[x_of_entrance][y_of_entrance]= move_counter -1;
                        }
                        if(x_of_entrance<LINES-1 && mas[x_of_entrance+1][y_of_entrance]==move_counter-1)
                        {
                            x_of_entrance += 1;
                            mas[x_of_entrance][y_of_entrance]= move_counter -1;
                        }
                        if(y_of_entrance>0 && mas[x_of_entrance][y_of_entrance-1]==move_counter-1)
                        {
                            y_of_entrance-=1;
                            mas[x_of_entrance][y_of_entrance]= move_counter -1;
                        }
                        if(y_of_entrance<COLUMNS-1 && mas[x_of_entrance][y_of_entrance+1]==move_counter-1)
                        {
                           y_of_entrance+=1;
                            mas[x_of_entrance][y_of_entrance]= move_counter -1;
                        }
                        move_counter-=1;
                }
            }
        }
    }
}

void passage_labyrinth(void)
{
    while((x_of_entrance!=x_of_exit) || (y_of_entrance!=y_of_exit))
    {
        definition_of_neighbors();
    }
}

void show(void)
{
    printf("\n");
    printf("--------------------------------\n");
    for(int i = 0; i<LINES; i++)
    {
        if(i!=4)
        {
            printf("|");
        }
        else{ printf(" ");}
        for(int j = 0; j<COLUMNS; j++)
        {
            printf("%3d", mas[i][j]);
        }
         if(i!=7)
        {
            printf("|");
        }
        else{ printf("");}
        printf("\n");
    }
     printf("--------------------------------\n");
}
