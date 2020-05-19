/*
** EPITECH PROJECT, 2020
** OOP_C_Workshop
** File description:
** game
*/

#include "game.h"

int game(void)
{
    prog_info_t *info = init_prog_info();

    cleaner(info);
    return (SUCCESS);
}