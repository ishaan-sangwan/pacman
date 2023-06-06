#include "render.h"
#include <stdlib.h>
#include <conio.h>
#include "movement.h"


int main(void){
    render();
    
    while(1){
        char key = getch();
        if ( key == 'q') break;
        movement_pacman(key);
    }
}
    
