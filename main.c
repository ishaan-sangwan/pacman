#include "render.h"
#include <stdlib.h>
#include <conio.h>
#include "movement.h"
#include "ghost.h"


extern struct ghost g1;
int main(void){
    ghost_init(g1);
    render(g1);
    
    while(1){
        char key = getch();
        if ( key == 'q') break;
        movement_pacman(key);
    }
}
    
