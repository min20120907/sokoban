#include "player.h"

player::player()
{
    player_facing = new QLabel;
    player_facing->setGeometry(50,50,50,50);
    front = new QPixmap(":/res/main_character(front).png");
    back = new QPixmap(":/res/main_character(back).png");
    left = new QPixmap(":/res/main_character(left).png");
    right = new QPixmap(":/res/main_character(right).png");
    connect(this , SIGNAL(character_turned_back()) , this , SLOT(character_turn_back()));
    connect(this , SIGNAL(character_turned_front()) , this , SLOT(character_turn_front()));
    connect(this , SIGNAL(character_turned_left()) , this , SLOT(character_turn_left()));
    connect(this , SIGNAL(character_turned_right()) , this , SLOT(character_turn_right()));
    player_facing->setPixmap(*front);
    player_facing->setScaledContents(true);
    player_facing->show();
}

void player::keyPressEvent(QKeyEvent *key){
    if(key->key() == Qt::Key_Up){
        emit character_turned_back();
    }
    if(key->key() == Qt::Key_Down){
        emit character_turned_front();
    }
    if(key->key() == Qt::Key_Left){
        emit character_turned_left();
    }
    if(key->key() == Qt::Key_Right){
        emit character_turned_right();
    }
}
void player::character_turn_back(){
    player_facing->setPixmap(*back);
}
void player::character_turn_front(){
    player_facing->setPixmap(*front);
}
void player::character_turn_left(){
    player_facing->setPixmap(*left);
}
void player::character_turn_right(){
    player_facing->setPixmap(*right);
}
