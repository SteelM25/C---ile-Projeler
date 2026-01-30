#include "room.h"


/*
Room::Room(int number, int rate){
    roomNumber = number;
    dailyRate = rate;
    guestName = "";
    isOccupied = false; //varsayılan olarak oda boş.
    extraExpenses = 0;
}*/

//2. constructor tanımlama yöntemi

Room::Room(int number, int rate) : roomNumber(number), dailyRate(rate), guestName(""), isOccupied(false), extraExpenses(0) {}

void Room::checkIn(const string& name){
    if(!isOccupied){
        guestName = name;
        isOccupied = true;
    }
    else{
        //oda boş değilse kiralama olmaz.
    }
}

void Room::checkOut(int days){
    if(isOccupied){ //oda boş değilse
        int totalCost = days * dailyRate + extraExpenses;
        guestName = "";
        isOccupied = false;
        extraExpenses = 0;
    }
    else{
        //oda zaten boş, çıkış yapılmaz.
    }
}

void Room::addExtraExpense(int amount){
    extraExpenses += amount;
}

int Room::getRoomNumber(){return roomNumber;}

bool Room::isRoomOccupied(){return isOccupied;}





