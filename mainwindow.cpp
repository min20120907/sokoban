#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    wall = new QPixmap(":/res/brick.jpg");
    Wall = new QLabel(this);
    Wall->setPixmap(*wall);
    Wall->setScaledContents(true);
    Wall->setGeometry(0,0,50,50);
}

MainWindow::~MainWindow()
{
    delete ui;
}


