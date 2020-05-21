/*
** EPITECH PROJECT, 2020
** OOP_C_Workshop
** File description:
** game_scene
*/

#include <stdlib.h>
#include "game.h"

game_object_t **init_game_scene(void)
{
    game_object_t **scene = malloc(sizeof(game_object_t *) * SCENE_SIZE);

    for (int i = 0; i < SCENE_SIZE; i++)
        scene[i] = NULL;
    return (scene);
}