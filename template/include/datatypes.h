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
typedef struct background bg_t;
typedef union game_object game_object_t;

//             enums            //
enum scenes_index
{
    game_scene,
    nb_scenes
};

enum g_o_type
{
    background_type,
    nb_types
};

//              Structures          //

struct prog_info
{
    sfRenderWindow *window;
    int running;
    int scene_index;
};

//              Game Object structures              //

struct background
{
    int type;
    void (*update)(prog_info_t *, bg_t *);
    void (*render)(prog_info_t *, bg_t *);
    void (*destroy)(prog_info_t *, bg_t *);
    sfVector2f pos;
    sfTexture *texture;
    sfSprite *sprite;
};

union game_object
{
    bg_t *background;
};

#endif /* !DATATYPES_H_ */
