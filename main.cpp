#include <iostream>
#include "Player.h"
#include "Room.h"

using namespace std;

int main() {

    Player player;
    // it asks the user how big the map should be: a number of rows and a number of columns.
    // char r;
    // char c;
    // cout << "Please enter a number of rows: " << endl;
    // cin >> r;
    // cout << "Please enter a number of columns: " << endl;
    // cin >> c;
    Room room(20,10, &player);

    

    bool isRunning = true;

    while(isRunning) {

        room.draw();

        char input;
        cout << endl << endl << "Please use the w/a/s/d keys to move or press q to quit:";
        cin >> input;

        if(input == 'q') {
            isRunning = false;
        } else {
            player.move(input, &room);
        }
    }

    return 0;


}