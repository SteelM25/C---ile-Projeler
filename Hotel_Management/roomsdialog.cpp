#include "roomsdialog.h"
#include "ui_roomsdialog.h"

RoomsDialog::RoomsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RoomsDialog)
{
    ui->setupUi(this);
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

