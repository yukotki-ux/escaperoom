#include <iostream>
#include "Player.h"
#include "Room.h"
#include "Item.h"

using namespace std;

int main() {

    // it asks the user how big the map should be: a number of rows and a number of columns.
    int r;
    int c;
    cout << "Please enter a number of rows:";
    cin >> r;
    cout << "\nPlease enter a number of columns: ";
    cin >> c;

    Player player;
    
    Room room(r,c, &player);

    Item key('k', "key");
    room.placeItem(&key, 2, 2);
    

    bool isRunning = true;

    while(isRunning) {

        room.draw();
        cout << Player->printInventory

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