#include "Inventory.h"
#include "Item.h"
#include <iostream>

bool Inventory::addItem(Item * i) {
    if(this->count >= this->arrayCapacity) {
        Item ** bigger = new Item*[arrayCapacity * 2];
        for(int x = 0; x < this->arrayCapacity; x++) {
            bigger[x] = this->items[x];
        }

        delete[] items;
        this->items = bigger;

        this->arrayCapacity = this->arrayCapacity * 2;
        

    }

    this->items[count] = i;
    this->count += 1;

    return true;
}
void Inventory::removeItem(char id) {
    bool deleted = false;
    for(int x = 0; x < count; x++) {
        if(this->items[count]->getId() == id) {
            delete this->items[x];
            this->items[count] = nullptr;
            deleted = true;
            this->count -= 1;
        }
        if(deleted == true) {
            this->items[x - 1] = this->items[x];
            this->items[x] = nullptr;
        }
    }
    if(deleted == true) {
        count -= 1;
    }
    
}
bool Inventory::hasItem(char id) {
    for(int x = 0; x < count; x++) {
        if(this->items[count]->getId() == id) {
            return true;
        }
    }
    return false;
}

Inventory::Inventory() {
    this->count = 0;
    this->arrayCapacity = 2;
    this->items = new Item*[arrayCapacity];
}
Inventory::~Inventory() {
    for(int x = 0; x < count; x++) {
            delete this->items[x];
        }
    delete[] this->items;
}

void Inventory::printInventory() {
    for(int x = 0; x < count; x++) {
        std::cout << this->items[x]->getName() << std::endl;
    }
}