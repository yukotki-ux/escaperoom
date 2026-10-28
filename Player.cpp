#include "Room.h"

Player::~Player(){

}
bool Player::move(char direction, Room * room) {



    if(direction == 'w') {
        if(room->canMove(this->x - 1, this->y))
        return true;
    )
    } else if (direction == 'a') {

    } else if (direction == 'd') {

    }
}