#ifndef PACMAN
#define PACAMN
#include "map.h"

int x = 1;
int y = 1;

void move_right(){
    if (gameMap[y][x+1] != 1){
        x++;
    }
    else if ( x == 9){
        x = 0;
    }

    gameMap[y][x] = 2;
}

void move_left(){
    if (gameMap[y][x-1] != 1){
        x--;
    }
    else if ( x == 0 ){
        x = 9;
    }
    gameMap[y][x] = 2;
}

void move_up(){
    if (gameMap[y-1][x] != 1){
        y--;
    }
    gameMap[y][x] = 2;
}

void move_down(){
    if ( gameMap[y+1][x] != 1){
        y++;
    }
    gameMap[y][x] = 2;
}
#endif