#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Player.h"
#include "Room.h"
#include "Item.h"

using namespace std;

int main() {

    srand(time(0));

    // it asks the user how big the map should be: a number of rows and a number of columns.
    int r = 0;
    int c = 0;
    while(r < 6 || c < 6) {
    cout << "Please enter a number of rows:";
    cin >> r;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nPlease enter a valid number." << endl;
        continue;
    }
    cout << "\nPlease enter a number of columns: ";
    cin >> c;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "\nPlease enter a valid number.\n" << endl;
        continue;
    }
    if(r < 6 || c < 6) {
            cout << "The map needs at least 6 rows and 6 columns." << endl;
     }
     }
    
    Player player;
    
    Room room(r, c, &player);

    Item key('k', "key");
    room.placeItem(&key, 2, 2);

    Item potion('p', "potion");
    room.placeItem(&potion, 4, 4);
    
    bool isRunning = true;

    while(isRunning) {

        room.draw();
        player.printInventory();

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