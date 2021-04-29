#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // setting render area
    _renderArea = new RenderArea(ui->centralwidget);

    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(_renderArea->sizePolicy().hasHeightForWidth());
    _renderArea->setSizePolicy(sizePolicy);


    // setting the layout
    QHBoxLayout* horLayout = new QHBoxLayout(ui->centralwidget); //(centralwidget);
    horLayout->addWidget(_renderArea);
    horLayout->addWidget(ui->grpSettings);

    // trigger setting default parameters
    on_spinBoxLevels_valueChanged(ui->spinBoxLevels->value());

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_spinBoxLevels_valueChanged(int lvls)
{
    //int a = 0;
//    _renderArea->setLevels(lvls);
}
