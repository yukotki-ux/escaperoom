#ifndef ROOM_H
#define ROOM_H

class Room {
    private:

        int width;
        int height;
        char ** map;

    public:
        Room(int x, int y);
        ~Room();
        void draw();
        
        bool canMove(int x, int y);

};

#endif