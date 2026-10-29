#include <iostream>
#include "Room.h"

using namespace std;

int main() {

    Player player;
    // it asks the user how big the map should be: a number of rows and a number of columns.
    char r;
    char c;
    cout << "Please enter a number of rows: " << endl;
    cin >> r;
    cout << "Please enter a number of columns: " << endl;
    cin >> c;
    Room room(r,c, &player);

    room.draw();

    
    cout << "Ending main ..." << endl;
return 0;


}