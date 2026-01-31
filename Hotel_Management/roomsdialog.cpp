#include "roomsdialog.h"
#include "ui_roomsdialog.h"
#include "hotel.h"

RoomsDialog::RoomsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RoomsDialog)
{
    ui->setupUi(this);

    //Butonları odaların doluluk durumuna göre renklendir.
    colorRoomButton(1,ui->pushButton_1);
    colorRoomButton(2,ui->pushButton_2);
    colorRoomButton(3,ui->pushButton_3);
    colorRoomButton(4,ui->pushButton_4);
    colorRoomButton(5,ui->pushButton_5);

}

void RoomsDialog::colorRoomButton(int roomNo, QPushButton* button){
    Hotel* hotel = Hotel::getInstance();
    Room* room = hotel->findRoom(roomNo);

    if(room->isRoomOccupied()){
        //oda dolu, kırmızıya boya
        button->setStyleSheet(
            "QPushButton { background-color: red; color: white; font-weight: bold; border-radius: 10px; font-size: 18 px }"

            "QPushButton:hover {background-color: darkred;}"
            );
    }
    else{
        //oda boş, yeşile boya
        button->setStyleSheet(
            "QPushButton { background-color: green; color: white; font-weight: bold; border-radius: 10px; font-size: 18px }"
            "QPushButton:hover {background-color: darkgreen;}"
            );
    }
}

RoomsDialog::~RoomsDialog()
{
    delete ui;
}

void RoomsDialog::on_pushButtonOk_clicked()
{
    accept();
}


void RoomsDialog::on_pushButtonCancel_clicked()
{
    reject();
}

