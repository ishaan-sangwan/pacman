#include "render.h"
#include <stdlib.h>
#include <conio.h>

void movement_pacman(int key){
    switch(key) { // the real value
        case 'w':
            // code for arrow up
            move_up();
            
            system("cls");
            render();
            break;
        case 's':
            // code for arrow down
            move_down();
            system("cls");
            render();
            break;
        case 'd':
            // code for arrow right
            move_right();
            system("cls");
            render();
            break;
        case 'a':
            // code for arrow left
            move_left();
            system("cls");
           
            render();
            break;
    }
}

int main(void){
    render();
    
    while(1){
        char key = getch();
        if ( key == 'q') break;
        movement_pacman(key);
    }
}
    
