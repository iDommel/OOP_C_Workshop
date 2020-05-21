/*
** EPITECH PROJECT, 2020
** OOP_C_Workshop
** File description:
** cleaner
*/

#include <stdlib.h>
#include "game.h"

void cleaner(prog_info_t *info, game_object_t ***scenes)
{
    destroy_info(info);
    for (int i = 0; i < nb_scenes; i++) {
        for (int j = 0; j < SCENE_SIZE; j++) {
            if (scenes[i][j] && scenes[i][j]->background->destroy) {
                scenes[i][j]->background->destroy(info,
                scenes[i][j]->background);
            }
            free(scenes[i][j]);
        }
        free(scenes[i]);
    }
    free(scenes);
}