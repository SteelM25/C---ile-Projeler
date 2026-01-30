#ifndef HOTEL_H
#define HOTEL_H

#include "room.h"
#include <vector>

class Hotel
{
private:
    static Hotel* instance; //hotel nesnesi
    vector<Room> rooms;

    Hotel(); //Private constructor for singleton pattern

public:
    //Hotel(); //singleton yöntemini kullandığım için gereksiz nesne oluşturulmasına engel olmak için public constructor'u siliyorum.

    static Hotel* getInstance();

    Room* findRoom(int roomNumber);

    ~Hotel();
};

#endif // HOTEL_H
