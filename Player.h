#ifndef PLAYER_H
#define PLAYER_H

class Room;

class Player {
    private: 
        int x;
        int y;
        Room * room;

    public:
        
        Player();
        ~Player();
        bool move(char direction, Room * room);
        int getX;
        int getY;

};

#endif