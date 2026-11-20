#include "Inventory.h"
#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H

class Room;

class Player {
    private:
        void getItem(Room * r, int x, int y); 
        Inventory inventory;
        int x;
        int y;
        Room * room;

    public:
        
        Player();
        ~Player();
        bool move(char direction, Room * room);
        int getX();
        int getY();
        void printInventory();

};

#endif