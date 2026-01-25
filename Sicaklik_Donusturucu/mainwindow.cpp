#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_pushButton_CtoF_clicked()
{
    bool ok; // kullanıcı sayı değil de boş bir değer veya metin girerse..
    float celsius = ui->textEdit->toPlainText().toFloat(&ok); // Kullanıcının girdiği değeri float türüne dönüştürdük. Metin girerse ok false döner.

    if(ok){
        float fahr = (celsius * 9/5) + 32; //C to F hesaplamasını yaptık.
        ui->labelSonuc->setText("Sonuc: " + QString::number(fahr) + " F"); // Bulduğumuz sonucu sonuc kısmının metin bölümüne yazdırdık.
    }
    else{
        ui->labelSonuc->setText("Hatali giris yapildi.");
    }
}


void MainWindow::on_pushButton_FtoC_clicked()
{
    bool ok;
    float fahr = ui->textEdit->toPlainText().toFloat(&ok);

    if(ok){
        float celsius = (fahr - 32) * 5/9;
        ui->labelSonuc->setText("Sonuc: " + QString::number(celsius) + "C");
    }
}

