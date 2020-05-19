/*
** EPITECH PROJECT, 2020
** OOP_C_Workshop
** File description:
** prog_info
*/

#include <stdlib.h>
#include "game.h"

prog_info_t *init_prog_info(void)
{
    prog_info_t *info = malloc(sizeof(prog_info_t));
    sfVideoMode mode = {WINDOW_WIDTH, WINDOW_HEIGHT, BPP};

    if (!info)
        return (NULL);
    info->window = sfRenderWindow_create(mode, TITLE, sfClose, NULL);
    sfRenderWindow_setFramerateLimit(info->window, FRAMERATE);
    info->running = 1;
    info->scene_index = game_scene;
    return (info);
}

void destroy_info(prog_info_t *info)
{
    if (info && info->window) {
        sfRenderWindow_destroy(info->window);
        free(info);
    }
}