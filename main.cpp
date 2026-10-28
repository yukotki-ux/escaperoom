#include <iostream>
#include "Room.h"

using namespace std;

int main() {

    cout << "Starting main..." << endl;

    Room room(20,10);

    room.draw();

    bool isRunning = true;

    while(isRunning) {

        char input;
        cout << endl << endl << "Please use the wasd keys to move or press q to quit:";
        cin >> input;
    }


    return 0;
}