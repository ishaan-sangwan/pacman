#ifndef MOVEMENT
#define MOVEMENT

#include "render.h"
#include <stdlib.h>
#include <conio.h>
#include "ghost.h"
#include "ghost_movement_randomizer.h"
extern struct ghost g1;

void movement_pacman(int key){
    switch(key) { // the real value
        case 'w':
            // code for arrow up
            move_up();
            ghost_move_random(&g1);
            system("cls");
            render(g1);
            break;
        case 's':
            // code for arrow down
            move_down();
            ghost_move_random(&g1);
            system("cls");
            render(g1);
            break;
        case 'd':
            // code for arrow right
            move_right();
            ghost_move_random(&g1);
            system("cls");
            render(g1);
            break;
        case 'a':
            // code for arrow left
            move_left();
            ghost_move_random(&g1);
            system("cls");
           
            render(g1);
            break;
    }
}

#endif