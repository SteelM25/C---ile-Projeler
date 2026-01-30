#include "hotel.h"

Hotel* Hotel::instance = nullptr; //ilk değer ataması(initialization)


Hotel::Hotel() {

    //ilk yol.
    Room r1(1,250);
    rooms.push_back(r1); //oluşturulan nesneyi vectore ekledik.

    Room r2(2, 250);
    rooms.push_back(r2);

    //2.yol.(Daha performanslıdır, push back veriyi kopyalar sonra vektöre ekler, emplace_back ise nesneyi direkt vektör içinde oluşturur.)
    rooms.emplace_back(3,250);
    rooms.emplace_back(4, 250);

    //suit oda
    rooms.emplace_back(5, 500);
}

//SINGLETON
Hotel* Hotel::getInstance(){
    if(instance == nullptr){
        instance = new Hotel(); //instance boş ise yeni bir tane oluşturdu.
    }
    return instance; //boş değilse var olanı döndürüyor.
}

Room* Hotel::findRoom(int roomNumber){
    for(auto& room: rooms){
        if(room.getRoomNumber() == roomNumber){
            return &room;//pointer türü döndüğü için ve pointer adres tuttuğu için direkt adresini çağırdık.
        }
    }
    return nullptr; //oda bulunamazsa boş dönsün.
}

Hotel::~Hotel(){
    delete instance; // new ile oluşturulan pointer delete edilmeli.
}
