#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <iostream>
using namespace std;

class Room
{
private:
    int roomNumber;
    string guestName;
    int dailyRate;
    bool isOccupied;//dolu mu değil mi
    int extraExpenses;


public:
    Room(int number, int rate);

    void checkIn(const string& name);
    void checkOut(int days);
    void addExtraExpense(int amount);

    int getRoomNumber();
    bool isRoomOccupied();
};

#endif // ROOM_H
