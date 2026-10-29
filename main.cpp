#include <iostream>
#include "Room.h"

using namespace std;

int main() {

    // it asks the user how big the map should be: a number of rows and a number of columns.
    cout << "Please enter a number of rows: " << endl;
    cin >> x;
    cout << "Please enter a number of columns: " << endl;
    cin >> y;

    Room room(x,y);

    room.draw();

    cout << "Ending main ..." << endl;
return 0;


}