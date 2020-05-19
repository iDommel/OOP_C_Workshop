/*
** EPITECH PROJECT, 2020
** OOP_C_Workshop
** File description:
** datatypes
*/

#ifndef DATATYPES_H_
#define DATATYPES_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

typedef struct prog_info prog_info_t;

enum scenes_index
{
    game_scene,
    nb_scenes
};

struct prog_info
{
    sfRenderWindow *window;
    int running;
    int scene_index;
};

#endif /* !DATATYPES_H_ */
