#ifndef RENDER
#define RENDER

#include "pacman.h"
#include "ghost.h"


void render(){
    struct ghost g1;
    g1.x = 8;
    g1.y = 8;

    for ( int i =0 ; i <10; i++){
        for (int j = 0; j < 10 ; j++){
            if (gameMap[i][j] == 1) printf("#");
            
            else if (i == y && j == x){
                printf("0");
            }
            else if (g1.x == j && g1.y == i) printf("~");
            else if ( gameMap[i][j] ==2 ) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}

#endif