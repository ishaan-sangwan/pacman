#ifndef RENDER
#define RENDER

#include "pacman.h"
#include "ghost.h"

void render_checker(struct ghost g1){
    printf("%d, %d",g1.x, g1.y );
}

void render(struct ghost g1){

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