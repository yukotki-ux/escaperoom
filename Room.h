#ifndef ROOM_H
#define ROOM_H

#include "Item.h"

class Player;

class Room {
    private:

        Player * player;
        int width;
        int height;
        char ** map;

    public:
        Room(int x, int y, Player * player);
        ~Room();
        void draw();
        
        bool canMove(int x, int y);

        void placeItem(Item i, int x, int y);

        Item takeItem(int x, int y);

};

#endif