#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool bprawy=1, blewy=0;
private slots:

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_prawy_clicked();

    void on_lewy_clicked();

    void on_radio1_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
