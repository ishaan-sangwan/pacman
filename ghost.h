#ifndef GHOST
#define GHOST

#include "map.h"
#include <stdlib.h>
struct ghost{
    int x;
    int y;

    
};

void ghost_up(struct ghost* g){
    if (gameMap[g->y][g->x] != 1){
        (g->y)--;
    }
}

void ghost_down(struct ghost* g){
    if (gameMap[g->y][g->x] != 1){
        (g->y)++;
    }
}

int* ghost_locator(struct ghost* g){
    int* ghost_coord = (int*)malloc(2*sizeof(int));
    ghost_coord[0] = g->x;
    ghost_coord[1] = g->y;
    return ghost_coord;
}



#endif
