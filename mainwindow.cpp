#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lewy->setDisabled(1);
    ui->radio1->setChecked(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{

    double wynik= ui->spinbox->value();
    wynik=wynik*wynik;
   // ui->wyjscie->setText(wynik);

}

void MainWindow::on_prawy_clicked()
{
    if(bprawy==1)
    {
   ui->prawy->setDisabled(1);
   ui->lewy->setDisabled(0);
   bprawy=0;
   blewy=1;
    }

}


void MainWindow::on_lewy_clicked()
{
    if(blewy==1)
    {
    ui->prawy->setDisabled(0);
    ui->lewy->setDisabled(1);
    bprawy=1;
    blewy=0;
    }
}


void MainWindow::on_radio2_clicked(bool checked)
{
    if(checked==1)
    {
        ui->radiotext->setText("dwa");


    }
}

void MainWindow::on_radio3_clicked(bool checked)
{
    if(checked==1)
    {
        ui->radiotext->setText("trzy");


    }
}

void MainWindow::on_radio1_toggled(bool checked)
{
    if(checked==1)
    {
        ui->radiotext->setText("jeden");


    }
}
