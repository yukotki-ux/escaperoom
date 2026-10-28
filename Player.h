#ifndef PLAYER_H
#define PLAYER_H

class Room;

class Player {
    private: 
        int x;
        int y;

    public:
        bool move(char key, Room * room);

};

#endif