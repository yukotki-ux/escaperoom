#include "Player.h"
#include "Room.h"

Player::Player() {
    this->x = 3;
    this->y = 3;
}

Player::~Player(){

}

int Player::getX() {
    return this->x;
}
int Player::getY() {
    return this->y;
}

bool Player::move(char direction, Room * room) {

    if(direction == 'w') {
        //(*room).canMove(this->x,this->y - 1)
        if(room->canMove(this->x, this->y - 1)){
            this->y -= 1;
            return true;
        }
    } else if (direction == 'a') {
        if(room->canMove(this->x - 1, this->y)){
            this->x -= 1;
            return true;
        }
    } else if (direction == 'd') {
        if(room->canMove(this->x + 1, this->y)){
            this->x += 1;
            return true;
    }
} else if (direction == 's') {
    if(room->canMove(this->x, this->y + 1)){
            this->y += 1;
            return true;
    }
}
    return false;
}