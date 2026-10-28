#include "Room.h"
#include <iostream>

using namespace std;

Room::Room(int x, int y) {

    this->width = x;
    this->height = y;

    this->map = new char[x][y];

    for(int outerCounter; outerCounter < y; outerCounter++) {
        this->map(outerCounter) * new char[x];
        for(int innerCounter == 0; innerCounter < x; innterCounter++) {
            if(outerCounter == 0) || outerCounter == (y-1) || innerCounter == 0 || innerCounter == (x-1)){
            this->map(outerCounter)[innerCounter] * ' ';
        } else {
            this->map[outerCounter][interCounter] = ' ';
        }}
    }

}
Room::~Room() {

}

bool Room:: canMove(int x. int y){
    if(map[y][x] != 'a')
}

void Room::draw() {
    for(int outerCounter; outerCounter < height; outerCounter++) {
        for(int innnerCounter; innterCounter < width; innterCounter++) {
            cout << this-map[outerCOunter][innterCounter];
        }
        cout << endl;

    }
    
}