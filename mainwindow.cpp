#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lewy->setFlat(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    double wynik= ui->spinbox->value();
    wynik=wynik*wynik;
   // ui->wyjscie->setText(Qstring::number(wynik));

}

void MainWindow::on_prawy_clicked()
{
    if(bprawy==1)
    {
   ui->prawy->setFlat(1);
   ui->lewy->setFlat(0);
   bprawy=0;
   blewy=1;
    }

}


void MainWindow::on_lewy_clicked()
{
    if(blewy==1)
    {
    ui->prawy->setFlat(0);
    ui->lewy->setFlat(1);
    bprawy=1;
    blewy=0;
    }
}

void MainWindow::on_radio1_clicked()
{

}
