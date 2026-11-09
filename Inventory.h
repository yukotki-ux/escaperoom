#include "Item.h"
#include <iostream>

#ifndef INVENTORY_H
#define INVENTORY_H

// An Inventory class keeps Items in an array it allocates with new[], starting with room for 2. When it's full, it allocates an array twice as big, copies the items over, and releases the old one with delete[].
// The Inventory can add an item, remove an item by its id, and say whether it holds one. It releases its array in its destructor, and it's never copied: pass it by reference.

class Inventory {
    private:
        int count;
        int arrayCapacity;
        Item** items;

    public:
        bool addItem(Item i);
        void removeItem(std::string id);
        bool hasItem(std::string id);
        Inventory();
        ~Inventory();
        std::string printInventory();
};

#endif