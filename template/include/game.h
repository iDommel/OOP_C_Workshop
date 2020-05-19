/*
** EPITECH PROJECT, 2020
** OOP_C_Workshop
** File description:
** game
*/

#ifndef GAME_H_
#define GAME_H_

#define SUCCESS 0
#define FAILURE 844

#define UNUSED(x) (void)(x)

#define WINDOW_WIDTH 1600
#define WINDOW_HEIGHT 900
#define BPP 64
#define FRAMERATE 60
#define TITLE "Game"

//            LIBS                  //

#include "datatypes.h"

//            FUNCTIONS             //

int game(void);
prog_info_t *init_prog_info(void);
void destroy_info(prog_info_t *info);
void cleaner(prog_info_t *info);
#endif /* !GAME_H_ */
