#ifndef MAP
#define MAP

#include <stdio.h>
#define MAX_HEIGHT 10
#define MAX_WIDTH 10

int gameMap[MAX_HEIGHT][MAX_WIDTH] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,1,1,0,1,1,1,0,1},
    {1,0,1,1,0,1,1,1,0,1},
    {0,0,0,0,0,0,0,0,0,0},
    {1,0,1,1,0,1,1,1,0,1},
    {1,0,1,1,0,1,1,1,0,1},
    {1,0,1,1,0,1,1,1,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
};

#endif 