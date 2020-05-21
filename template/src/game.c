/*
** EPITECH PROJECT, 2020
** OOP_C_Workshop
** File description:
** game
*/

#include "game.h"

// check datatypes.h to check the structures contents
int game(void)
{
    prog_info_t *info = init_prog_info();
    game_object_t ***scenes = init_scenes();

    cleaner(info, scenes);
    return (SUCCESS);
}