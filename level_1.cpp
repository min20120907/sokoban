#include "level_1.h"

//level_1::level_1(QObject *parent) : QObject(parent)
//{

//}

level_1::array arrdata = {{
{0 , 2 , 2 , 2 , 2 , 0 , 0 , 0 , 0 , 0},
{0 , 2 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 0},
{0 , 2 , 4 , 1 , 1 , 1 , 4 , 1 , 2 , 0},
{0 , 2 , 1 , 3 , 2 , 3 , 1 , 1 , 2 , 0},
{2 , 2 , 1 , 2 , 2 , 2 , 1 , 2 , 2 , 0},
{2 , 1 , 4 , 3 , 2 , 3 , 1 , 2 , 0 , 0},
{2 , 1 , 5 , 1 , 1 , 1 , 4 , 2 , 0 , 0},
{2 , 2 , 2 , 2 , 2 , 1 , 1 , 2 , 0 , 0},
{0 , 0 , 0 , 0 , 2 , 2 , 2 , 2 , 0 , 0},
{0 , 0 , 0 , 0 , 2 , 2 , 2 , 2 , 0 , 0}}};
void level_1::map_gen(){
    int idx_ground = 0;
    int idx_wall = 0;
    int idx_target = 0;
    int idx_box = 0;
    int idx_player = 0;
    if(sizeof(arrdata.map)/sizeof(arrdata.map[0])!=10||sizeof(arrdata.map[0])/sizeof(int)!=10){
        QMessageBox msgBox;
        msgBox.setText("Invalid Map.");
        msgBox.exec();
    }
    for(int x = 0; x<10;x++){
        for(int y =0;y<10;y++){
            switch(arrdata.map[x][y]){
                case 1:
                    ground[idx_ground] = new QPixmap(":/res/stone_ground.jpg");
                    Ground[idx_ground] = new QLabel();
                    Ground[idx_ground] -> setPixmap(*ground[idx_ground]);
                    Ground[idx_ground] -> setScaledContents(true);
                    Ground[idx_ground] -> setGeometry(50*x,50*y,50,50);
                    break;
                case 2:
                    wall[idx_wall] = new QPixmap(":/res/brick.jpg");
                    Wall[idx_wall] = new QLabel();
                    Wall[idx_wall] -> setPixmap(*wall[idx_wall]);
                    Wall[idx_wall] -> setScaledContents(true);
                    Wall[idx_wall] -> setGeometry(50*x,50*y,50,50);
                    break;
                case 3:
                    target[idx_target] = new QPixmap();
                    Target[idx_target] = new QLabel();
                    Target[idx_target] -> setPixmap(*target[idx_target]);
                    Target[idx_target] -> setScaledContents(true);
                    Target[idx_target] -> setGeometry(50*x,50*y,50,50);
                    break;
                case 4:
                    box[idx_box] = new QPixmap();
                    Box[idx_box] = new QLabel();
                    Box[idx_box] -> setPixmap(*box[idx_box]);
                    Box[idx_box] -> setScaledContents(true);
                    Box[idx_box] -> setGeometry(50*x,50*y,50,50);
                    break;
                case 5:
                    player[idx_player] = new QPixmap();
                    Player[idx_player] = new QLabel();
                    Player[idx_player] -> setPixmap(*player[idx_player]);
                    Player[idx_player] -> setScaledContents(true);
                    Player[idx_player] -> setGeometry(50*x,50*y,50,50);
                    break;
                default:
                    break;
            }
        }
    }
}
/*
 * air : 0
 * ground : 1
 * wall : 2
 * target : 3
 * box : 4
 * player : 5
 */
