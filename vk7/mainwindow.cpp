#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::setEditNum(int num)
{
    if (tila == 0) {
        ui->num1Edit->setText(QString::number(num));

    }  else if (tila ==1) {
      ui->num2Edit->setText(QString::number(num));
        }
}

void MainWindow::on_plusButton_clicked()
{
    if (tila == 2) {
    // haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    // haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " + " << num2;
    // lasketaan tulos
    result = num1 + num2;
    //kirjoitetaan tulos
    QString r = QString::number(result);
    ui->result->setText(r);
    tila = 0;

    }
}


void MainWindow::on_minusButton_clicked()
{
    if (tila == 2) {
    // haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 = n1.toInt();
    // haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 = n2.toInt();
    qDebug() << num1 << " - " << num2;
    // lasketaan tulos
    result = num1 - num2;
    //kirjoitetaan tulos
    QString r = QString::number(result);
    ui->result->setText(r);

    tila = 0;
    }
}


void MainWindow::on_N1Button_clicked()
{
    setEditNum(1);
}


void MainWindow::on_N2Button_clicked()
{
    setEditNum(2);
}


void MainWindow::on_N3Button_clicked()
{

    setEditNum(3);
}


void MainWindow::on_enterButton_clicked()
{
    if (tila == 0) {
        tila = 1;

    } else if (tila == 1) {
        tila = 2;
    }


}


