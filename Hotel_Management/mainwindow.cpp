#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "roomsdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCheckin_clicked()
{
    RoomsDialog* roomsDialog = new RoomsDialog(this); //this yazarak oluşturulan pointer'ın en son delete edilmesini sağladık. Tekrardan manuel delete etmeye gerek yok.
    auto ret = roomsDialog->exec();

    if(ret == QDialog::Accepted){
        qDebug() << "Ok tiklandi";
    }else{
        qDebug() << "Cancel tiklandi";
    }

}

