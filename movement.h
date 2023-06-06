#ifndef MOVEMENT
#define MOVEMENT

#include "render.h"
#include <stdlib.h>
#include <conio.h>
#include "ghost.h"
extern struct ghost g1;

void movement_pacman(int key){
    switch(key) { // the real value
        case 'w':
            // code for arrow up
            move_up();
            system("cls");
            render(g1);
            break;
        case 's':
            // code for arrow down
            move_down();
            system("cls");
            render(g1);
            break;
        case 'd':
            // code for arrow right
            move_right();
            system("cls");
            render(g1);
            break;
        case 'a':
            // code for arrow left
            move_left();
            system("cls");
           
            render(g1);
            break;
    }
}

#endif