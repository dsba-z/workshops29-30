#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::add()
{
    double firstNumber = ui->lineEdit->text().toDouble();
    double secondNumber = ui->lineEdit_2->text().toDouble();
    double resultNumber = firstNumber + secondNumber;
    ui->lineEdit_3->setText(QString::number(resultNumber));
}

MainWindow::~MainWindow()
{
    delete ui;
}

