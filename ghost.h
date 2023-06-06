#ifndef GHOST
#define GHOST

#include "map.h"
#include <stdlib.h>
struct ghost{
    int x;
    int y;
    
};

struct ghost g1;

void ghost_up(struct ghost g){
    if (gameMap[g.y][g.x] != 1){
        (g.y)--;
    }
}

void ghost_down(struct ghost* g){
    if (gameMap[g->y][g->x] != 1){
        (g->y)++;
    }
}

void ghost_left(struct ghost* g){
    if ( gameMap[g->y][g->x] != 1){
        (g->x)++;
    }
}

void ghost_right(struct ghost* g){
    if (gameMap[g->y][g->x] != 1){
        (g->x)++;
    }
}

int* ghost_locator(struct ghost* g){
    int* ghost_coord = (int*)malloc(2*sizeof(int));
    ghost_coord[0] = g->x;
    ghost_coord[1] = g->y;
    return ghost_coord;
}

void ghost_init(struct ghost g){
    g.x = 8;
    g.y = 8;
}

#endif
