/*
 * game_of_life.h
 *
 *  Created on: 11 июл. 2023 г.
 *      Author: solodovnikov_ma
 */

#ifndef SRC_GAME_OF_LIFE_H_
#define SRC_GAME_OF_LIFE_H_
void create_matrix(void);
void set_matrix_population(int counter_life);
void show_matrix(void);
int check_cell_neighbour(int cell_index_x, int cell_index_y);
bool cell_state_next_generation(int cell_index_x, int cell_index_y);
void check_new_generation(void);
void save_new_generation(void);
void draw_picture(void);

#endif /* SRC_GAME_OF_LIFE_H_ */
