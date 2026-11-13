#include "Inventory.h"
#include "Item.h"
#include <iostream>

bool Inventory::addItem(Item * i) {
    if(this->count >= this->arrayCapacity) {
        Item ** bigger = new Item*[arrayCapacity * 2];
        for(int x = 0; x < arrayCapacity; x++) {
            bigger[x] = this->items[x];
        }

        delete[] items;
        this->items = bigger;

        this->arrayCapacity = this->arrayCapacity * 2;
        

    }

    this->items[count] = i;
    count += 1;

    return true;
}
void Inventory::removeItem(std::string id) {
    for(int x; x < count; x++) {
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
    for(int x; x < count; x++) {
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
~Inventory::Inventory() {
    for(int x; x < count; x++) {
        if(this->items[count]->getId() == id) {
            delete this->items[x];
        }
    delete[] this->items;
}

std::string printInventory() {
    for(int x; x < count; x++) {
        std::cout << 
    }
}