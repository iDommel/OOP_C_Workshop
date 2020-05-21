/*
** EPITECH PROJECT, 2020
** OOP_C_Workshop
** File description:
** init_scenes
*/

#include <stdlib.h>
#include "game.h"

game_object_t ***init_scenes(void)
{
    game_object_t ***scenes = malloc(sizeof(game_object_t **) * (nb_scenes));

    scenes[game_scene] = init_game_scene();
    return (scenes);
}