#ifndef GHOST_RANDOM
#define GHOST_RANDOM
#include <stdlib.h>
#include "ghost.h"

extern struct ghost g1;

int RandRange(int lower, int upper)
{
    return (rand() %(upper - lower )) + lower;
}


void ghost_move_random(struct ghost* g){
    int move = RandRange(0,4);
    switch (move){
        case 0:
            ghost_up(&g1);
        case 1:
            ghost_down(&g1);
        case 2:
            ghost_left(&g1);
        case 3:
            ghost_right(&g1);
    }

}


#endif