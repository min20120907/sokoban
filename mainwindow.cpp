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

    player_facing = new QLabel(this);
    player_facing->setGeometry(50,50,50,50);
    front = new QPixmap(":/res/main_character(front).png");
    back = new QPixmap(":/res/main_character(back).png");
    left = new QPixmap(":/res/main_character(left).png");
    right = new QPixmap(":/res/main_character(right).png");

    player_facing->setPixmap(*front);
    player_facing->setScaledContents(true);
    player_facing->show();
}
void MainWindow::keyPressEvent(QKeyEvent* key){
    if(key->key() == Qt::Key_Up){
        emit character_turn_back();
    }
    if(key->key() == Qt::Key_Down){
        emit character_turn_front();
    }
    if(key->key() == Qt::Key_Left){
        emit character_turn_left();
    }
    if(key->key() == Qt::Key_Right){
        emit character_turn_right();
    }
}
void MainWindow::character_turn_back(){
    player_facing->setPixmap(*back);
}
void MainWindow::character_turn_front(){
    player_facing->setPixmap(*front);
}
void MainWindow::character_turn_left(){
    player_facing->setPixmap(*left);
}
void MainWindow::character_turn_right(){
    player_facing->setPixmap(*right);
}
MainWindow::~MainWindow()
{
    delete ui;
}




